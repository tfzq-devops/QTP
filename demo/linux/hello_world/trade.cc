// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name trade.cc
// 天风量化交易平台(QTP)交易API示例程序 - Helloworld

#include <iostream>

extern "C" {
    #include <iconv.h>
}

#include "trade.h"

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

// void TradeSPI::onLogout(TFRspInfoField *pRspInfo) {
//   std::cout << __FUNCTION__ << std::endl;

//   std::unique_lock<std::mutex> lck(mtx_);
//   flag_logged_in_ = false;
//   cv_.notify_all();
// }

int main(int argc, char *argv[]) {
  int operator_id;
  std::string password;

  std::cout << "请输入您的操作员账户(operator_id)和密码，以空格分隔:" << std::endl;
  std::cin >> operator_id >> password;
  std::cin.get(); // Omit \n

  // TF_PT_STPStockTd - STP股票交易柜台类型，参阅TFDataType.h
  TFTradeApi *api = TFTradeApi::createTFTradeApi(CONN_FLOW_FOLDER, TF_PT_STPStockTd);

  TradeSPI spi(api);

  api->registerSpi(&spi);
  api->registerFront(TRADE_FRONT_ADDR);
  api->subscribePrivateTopic(TF_TERT_QUICK);

  int ret;
  ret = api->init();

  if (ret != 0) { std::cerr << "Failed initialising Trade API, error code: " << ret << std::endl; exit(1); }

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

  // Wait until user is logged out
  // ret = api->logout();
  // std::cout << "Logout请求发送结果: " << ret << std::endl;

  // {
  //   std::unique_lock<std::mutex> lck(spi.mtx_);

  //   if(spi.flag_logged_in_) {
  //     spi.cv_.wait(lck, [&spi]{return !spi.flag_logged_in_; });
  //   }
  // }

  // std::cout << "用户登出成功！" << std::endl;

  // getchar();

  return 0;
}