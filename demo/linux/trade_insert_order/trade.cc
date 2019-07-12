// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name trade.cc
// Description

#include "trade.h"

#include <iconv.h>
#include <iostream>

#define CONN_FLOW_FOLDER "./"
#define TRADE_FRONT_ADDR "tcp://47.107.18.161:6001"
#define QUERY_FRONT_ADDR "tcp://47.107.18.161:6002"
#define FEED_FRONT_ADDR "tcp://47.107.23.201:13889"

using namespace tfzq::stp;

int gbk2utf8(char *o_buf, int o_buf_len, char *i_buf, int i_buf_len) {
  iconv_t c = iconv_open("utf-8", "gb2312");
  memset(o_buf, 0, o_buf_len);
  int res = iconv(c, &i_buf, (size_t *)&i_buf_len, &o_buf, (size_t *)&o_buf_len);
  iconv_close(c);

  return res;
}

void TradeSPI::onConnected () {
  std::cout << __FUNCTION__ << std::endl;

  std::unique_lock<std::mutex> lck(mtx_);
  flag_connected_ = true;
  cv_.notify_all();
}

void TradeSPI::onLogin(TFRspLoginField *pRspLogin, TFRspInfoField *pRspInfo) {
  std::cout << __FUNCTION__ << std::endl;

  char err_msg[255];
  gbk2utf8(err_msg, 255, pRspInfo->ErrorMsg, strlen(pRspInfo->ErrorMsg));

  if (pRspInfo->ErrorID != 0) { std::cerr << "Failed authenticating user credentials: " << err_msg << std::endl; exit(1); }

  std::unique_lock<std::mutex> lck(mtx_);
  flag_logged_in_ = true;
  cv_.notify_all();
}

void TradeSPI::onRtnOrder(TFOrderField *pOrder) {
  std::cout << __FUNCTION__ << std::endl;

  std::cout << "OrderLocalID" << pOrder->OrderLocalID << std::endl;
  std::cout << "OrderSysID" << pOrder->OrderSysID << std::endl;
  std::cout << "OrderRef" << pOrder->OrderRef << std::endl;

};

void TradeSPI::onRtnTrade(TFTradeField *pTrade) {
  std::cout << __FUNCTION__ << std::endl;

  std::cout << "OrderLocalID" << pTrade->OrderLocalID << std::endl;
  std::cout << "OrderRef" << pTrade->OrderRef << std::endl;


};

void TradeSPI::onOrderSend(TFOrderReqField *pOrderReq, TFRspInfoField *pRspInfo) {
  std::cout << __FUNCTION__ << std::endl;

  char err_msg[255];
  gbk2utf8(err_msg, 255, pRspInfo->ErrorMsg, strlen(pRspInfo->ErrorMsg));

  std::cout << pRspInfo->ErrorID << ":" << err_msg << std::endl;
};

void TradeSPI::onErrRtnOrderSend(TFOrderReqField *pInputOrder, TFRspInfoField *pRspInfo) {
  std::cout << __FUNCTION__ << std::endl;

  char err_msg[255];
  gbk2utf8(err_msg, 255, pRspInfo->ErrorMsg, strlen(pRspInfo->ErrorMsg));

  std::cout << pRspInfo->ErrorID << ":" << err_msg << std::endl;
};


int main(int argc, char *argv[]) {
  int operator_id,
      account_id,
      combo_id;
  std::string password;

  std::cout << "请输入您的操作员账户(operator_id)、密码、账户编号(account_id)、组合编号(combo_id)，以空格分隔:" << std::endl;
  std::cin >> operator_id >> password >> account_id >> combo_id;
  std::cin.get(); // Omit \n

  // TF_PT_STPStockTd - STP股票交易柜台类型，参阅TFDataType.h
  TFTradeApi *api = TFTradeApi::createTFTradeApi(CONN_FLOW_FOLDER, TF_PT_STPStockTd);

  TradeSPI spi(api);

  api->registerSpi(&spi);
  api->registerFront(TRADE_FRONT_ADDR);
  api->subscribePrivateTopic(TF_TERT_QUICK);

  int ret;
  ret = api->init();

  if (ret != 0) { std::cerr << "Failed initialising Trader API, error code: " << ret << std::endl; exit(1); }

  // Wait until front is connected
  {
    std::unique_lock<std::mutex> lck(spi.mtx_);

    if(!spi.flag_connected_) {
      spi.cv_.wait(lck, [&spi]{return spi.flag_connected_; });
    }
  }

  std::cout << "Trade front connected!" << std::endl;

  // User authenticate & login
  TFUserLoginReqField f;
  f.OperatorID = operator_id;
  strcpy(f.Password, password.c_str());

  ret = api->login(&f);
  std::cout << "Login请求发送结果: " << ret << std::endl;

  // Wait until user is logged in
  {
    std::unique_lock<std::mutex> lck(spi.mtx_);

    if(!spi.flag_logged_in_) {
      spi.cv_.wait(lck, [&spi]{return spi.flag_logged_in_; });
    }
  }

  std::cout << "用户登录成功！" << std::endl;

  getchar();

  TFOrderReqField rf;
  rf.AccountID = account_id;
  rf.OperatorID = operator_id;
  rf.ComboID = combo_id;
  strcpy(rf.InstrumentID, "600570");
  strcpy(rf.OrderRef, "1");
  strcpy(rf.ExchangeID, TF_EXCHANGE_SSE);
  rf.OrderPriceType = TF_OPT_LimitPrice;
  rf.Direction = TF_D_Buy;
  rf.CombOffsetFlag[0] = TF_OF_Auto;

  // 对于股票交易，以下字段请忽略
  // rf.CombHedgeFlag[0] = TF_TC_Speculation;  
  // rf.CoveredFlag = TF_CF_Uncovered;
  rf.LimitPrice = 70;
  rf.VolumeTotalOriginal = 100;
  rf.TimeCondition = TF_TC_GFD;
  rf.VolumeCondition = TF_VC_AV;

  api->sendOrder(&rf);

  getchar();

  return 0;
}