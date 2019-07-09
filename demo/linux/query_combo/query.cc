// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name query.cc
// Description

#include "query.h"

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

void QuerySPI::onConnected () {
  std::cout << __FUNCTION__ << std::endl;

  std::unique_lock<std::mutex> lck(mtx_);
  flag_connected_ = true;
  cv_.notify_all();
}

void QuerySPI::onLogin(TFRspLoginField *pRspLogin, TFRspInfoField *pRspInfo) {
  std::cout << __FUNCTION__ << std::endl;

  char err_msg[255];
  gbk2utf8(err_msg, 255, pRspInfo->ErrorMsg, strlen(pRspInfo->ErrorMsg));

  if (pRspInfo->ErrorID != 0) { std::cerr << "Failed authenticating user credentials: " << err_msg << std::endl; exit(1); }

  std::unique_lock<std::mutex> lck(mtx_);
  flag_logged_in_ = true;
  cv_.notify_all();
}

void QuerySPI::onQryCombo(TFAccountComboField *pCombo, TFRspInfoField *pRspInfo) {
  std::cout << __FUNCTION__ << std::endl;
  char combo_name[255];
  gbk2utf8(combo_name, 255, pCombo->ComboName, strlen(pCombo->ComboName));

  std::cout << "ComboID: " << pCombo->ComboID << std::endl
            << "AccountID: " << pCombo->AccountID << std::endl
            << "ComboName: " << combo_name << std::endl
            << "ExchangeID: " << pCombo->ExchangeID << std::endl
            << "KeyInstrumentID: " << pCombo->KeyInstrumentID << std::endl
            << "IsActive: " << pCombo->IsActive << std::endl
            << "IsDefault: " << pCombo->IsDefault << std::endl
            << "TradingDay: " << pCombo->TradingDay << std::endl
            << "DayTradeEnable: " << pCombo->DayTradeEnable << std::endl
            
            << std::endl;
};

int main(int argc, char *argv[]) {
  int operator_id;
  int account_id;
  int comb_id;
  std::string password;

  std::cout << "请输入您的操作员账户(operator_id)、密码、账户编码(account_id)、组合编码(comb_id), 以空格分隔:" << std::endl;
  std::cin >> operator_id >> password >> account_id >> comb_id;
  std::cin.get(); // Omit \n

  // TF_PT_STPStockTd - STP股票交易柜台类型，参阅TFDataType.h
  TFQueryApi *api = TFQueryApi::createTFQueryApi(CONN_FLOW_FOLDER, TF_PT_STPStockQry);

  QuerySPI spi(api);

  api->registerSpi(&spi);
  api->registerFront(QUERY_FRONT_ADDR);

  int ret;
  ret = api->init();

  if (ret != 0) { std::cerr << "Failed initialising Query API, error code: " << ret << std::endl; exit(1); }

  // Wait until front is connected
  {
    std::unique_lock<std::mutex> lck(spi.mtx_);

    if(!spi.flag_connected_) {
      spi.cv_.wait(lck, [&spi]{return spi.flag_connected_; });
    }
  }

  std::cout << "Query front connected!" << std::endl;

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

  TFQryComboField f1;
  // f1.AccountID = account_id;
  // f1.ComboID = comb_id;
  api->qryCombo(&f1);

  getchar();

  return 0;
}