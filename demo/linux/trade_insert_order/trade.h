// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name trade.h
// Description

#pragma once
#include "TFTradeApi.h"

#include <mutex>
#include <condition_variable>

using namespace tfzq::stp;

class TradeSPI : public TFTradeSpi {
  TFTradeApi *api_;

public:
  std::mutex mtx_;
  std::condition_variable cv_;

  bool flag_connected_;
  bool flag_logged_in_;

  TradeSPI(TFTradeApi *api) : api_(api), flag_logged_in_(false) {};

  virtual void onConnected();
  virtual void onLogin(TFRspLoginField *pRspLogin, TFRspInfoField *pRspInfo);
  virtual void onRtnOrder(TFOrderField *pOrder);
  virtual void onRtnTrade(TFTradeField *pTrade);
  virtual void onOrderSend(TFOrderReqField *pOrderReq, TFRspInfoField *pRspInfo);
  virtual void onErrRtnOrderSend(TFOrderReqField *pInputOrder, TFRspInfoField *pRspInfo);
};