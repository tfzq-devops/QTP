// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name market_data.h
// Description

#include "TFMdApi.h"
#include "TFUserApiStruct.h"

class TMarketDataSPI : public TFMarketDataSPI {
    TFMarketDataAPI *api_;

public:
    TMarketDataSPI(TFMarketDataAPI *api) : api_(api) {}

    ~TMarketDataSPI() {}

    virtual void onConnect()override;

    virtual void onDisConnect(TFErrorInfoField* errorID)override;

    //用户登录应答
    virtual void  onRspLogin(TFErrorInfoField *errorID, int sessionID)override;

    virtual void  onRspSubMarketData(const TFQuoteSubField *quote, TFErrorInfoField *errorID, int sessionID);

    virtual void  onRtnDepthMarketData(const TFQuoteType dataType, const void *data, bool isLast = true);

    // //股票快照行情
    virtual void onRtnTickData(const TFStockTickDataField *data);

    // //逐笔成交行情
    // virtual void onRtnTransactionData(const TFTransactionDataField *data);

    // //逐笔委托行情
    // //仅限于深圳市场行情
    // virtual void onRtnOrderData(const TFOrderDataField *data);

    // //指数行情
    // virtual void onRtnIndexTickData(const TFIndexDataField *data);

    // //期权行情
    // virtual void onRtnOptionTickData(const TFOptionDataField *data);

    // //期货行情
    // virtual void onRtnFuturesTickData(const TFFuturesTickDataField *data);

    // //委托队列行情
    // virtual void onRtnOrderQueueData(const TFOrderQueueDataHeadField *data, int64_t *orderQueue, int orderCount);

    // virtual void onRtnIndicatorData(const TFMarketIndicatorField *data);
};

