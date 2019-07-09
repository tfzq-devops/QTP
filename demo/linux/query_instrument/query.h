// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name query.h
// Description

#pragma once
#include "TFQueryApi.h"

#include <mutex>
#include <condition_variable>

using namespace tfzq::stp;

class QuerySPI : public TFQuerySpi {
  TFQueryApi *api_;

public:
  std::mutex mtx_;
  std::condition_variable cv_;

  bool flag_connected_;
  bool flag_logged_in_;

  QuerySPI(TFQueryApi *api) : api_(api), flag_logged_in_(false) {};

  virtual void onConnected();
  virtual void onLogin(TFRspLoginField *pRspLogin, TFRspInfoField *pRspInfo);
  virtual void onQryInstrument(TFInstrumentField  *pInstrument, TFRspInfoField *pRspInfo);
};