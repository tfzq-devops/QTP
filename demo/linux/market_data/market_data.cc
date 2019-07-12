// Copyright Jul 2019 TF Securities Co., Ltd
// Author    F. Wang
// File Name market_data.cc
// Description

#include <iostream>
#include <iconv.h>
#include <time.h>
#include <sys/time.h>

#include "market_data.h"

inline int64_t buildLocalTime()
{
  int64_t timeResult;
#ifdef _WIN32
  SYSTEMTIME localTime;
  GetLocalTime(&localTime);
  timeResult = localTime.wHour * 10000000 + localTime.wMinute * 100000 + localTime.wSecond * 1000 + localTime.wMilliseconds;
#else
  /*   struct timeval tv;
  struct tm *pTime;
  memset(&tv, 0, sizeof(struct timeval));
  gettimeofday(&tv, NULL);
  pTime = localtime(&tv.tv_sec);
  timeResult = (pTime->tm_hour * 10000ll + pTime->tm_min * 100ll + pTime->tm_sec) * 1000000ll + tv.tv_usec;*/
  struct timeval localTime;
  struct tm *p;
  gettimeofday(&localTime, 0);
  p = localtime(&localTime.tv_sec);
  timeResult = p->tm_hour * 10000000 + p->tm_min * 100000 + p->tm_sec * 1000 + localTime.tv_usec / 1000;
#endif
  return timeResult;
}

int gbk2utf8(char *o_buf, int o_buf_len, char *i_buf, int i_buf_len) {
  iconv_t c = iconv_open("utf-8", "gb2312");
  memset(o_buf, 0, o_buf_len);
  int res = iconv(c, &i_buf, (size_t *)&i_buf_len, &o_buf, (size_t *)&o_buf_len);
  iconv_close(c);

  return res;
}

void TMarketDataSPI::onConnect() {
  std::cout << __FUNCTION__ << std::endl;
  TFLoginInfoField loginField;
  strcpy(loginField.UserID, "tfmdRD");
  strcpy(loginField.UserPassword, "tfmdRD");
  api_->reqLogin(&loginField, 0);
}

void TMarketDataSPI::onDisConnect(TFErrorInfoField* err) {
  std::cout << __FUNCTION__ << std::endl;
}

void TMarketDataSPI::onRspLogin(TFErrorInfoField *err, int sessionID) {
  std::cout << __FUNCTION__ << std::endl;

  char err_msg[255];
  gbk2utf8(err_msg, 255, err->ErrorMsg, strlen(err->ErrorMsg));

  if (err && err->ErrorID != 0)
  {
      std::cout << err->ErrorID << ":" << err_msg << std::endl;
      return;
  }
  std::vector<TFQuoteSubField> sublist;
  TFQuoteSubField quoteField;

  quoteField.Quote = TFQuote_RMSStockTick;
  strcpy(quoteField.ExID, "SH");
  strcpy(quoteField.SecID, "600570");
  sublist.push_back(quoteField);

  quoteField.Quote = TFQuote_RMSStockTick;
  strcpy(quoteField.ExID, "HK");
  strcpy(quoteField.SecID, "00001");
  sublist.push_back(quoteField);

  // api_->subscribeQuote(&sublist[0], sublist.size());

  for (int i=0; i<sublist.size(); i++) {
    api_->subscribeQuote(&sublist[0], sublist.size());
  }
}

void TMarketDataSPI::onRspSubMarketData(const TFQuoteSubField *quote, TFErrorInfoField *err, int sessionID) {
  std::cout << __FUNCTION__ << std::endl;

  char err_msg[255];
  gbk2utf8(err_msg, 255, err->ErrorMsg, strlen(err->ErrorMsg));

  if (err && err->ErrorID != 0) { std::cout << err->ErrorID << ":" << err_msg << std::endl; return; }
}

void TMarketDataSPI::onRtnDepthMarketData(const TFQuoteType dataType, const void *data, bool isLast) {
  std::cout << __FUNCTION__ << std::endl;

  std::cout << " Rcv data , type: "<<dataType<< std::endl;

  switch (dataType) {
    // case TFQuote_RMSTransaction:
    //   onRtnTransactionData((TFTransactionDataField *)data);
    //   break;
    case TFQuote_RMSStockTick:
      onRtnTickData((TFStockTickDataField *)data);
      break;
    // case TFQuote_RMSIndexTick:
    //   onRtnIndexTickData((TFIndexDataField *)data);
    //   break;
    // case TFQuote_RMSOptionTick:
    //   onRtnOptionTickData((TFOptionDataField *)data);
    //   break;
    // case TFQuote_RMSFutureTick:
    //   onRtnFuturesTickData((TFFuturesTickDataField *)data);
    //   break;
    // case TFQuote_RMSTransactionOrder:
    //   onRtnOrderData((TFOrderDataField *)data);
    //   break;
    // case TFQuote_RISIndicator:
    //   onRtnIndicatorData((TFMarketIndicatorField*)data);
    //   break;
    // case TFQuote_RMSOrderQueue: {
    //   TFOrderQueueDataHeadField *rtnData = (TFOrderQueueDataHeadField *)data;
    //   std::cout << __FUNCTION__ <<" "<<rtnData->ExTime <<" "<<rtnData->SecID<<" "<< rtnData->OrderCount << std::endl;
    //   onRtnOrderQueueData(rtnData, rtnData->OrderQueue, rtnData->OrderCount);

    //   break;
    // }
    default: {
      break;
    }
  }
}


void TMarketDataSPI::onRtnTickData(const TFStockTickDataField *data)
{
  std::cout << buildLocalTime() << ","
        << data->TradeDate << ","
        << data->Type << ","
        << data->Seq << ","
        << data->ExID << ","
        << data->SecID << ","
        << data->ExTime << ","
        << data->LocalTime << ","
        << data->PreClosePx << ","
        << data->OpenPx << ","
        << data->HighPx << ","
        << data->LowPx << ","
        << data->LastPx << ","
        << data->UpLimitPx << ","
        << data->DownLimitPx << ","
        << data->BidPx[0] << ","
        << data->BidPx[1] << ","
        << data->BidPx[2] << ","
        << data->BidPx[3] << ","
        << data->BidPx[4] << ","
        << data->BidPx[5] << ","
        << data->BidPx[6] << ","
        << data->BidPx[7] << ","
        << data->BidPx[8] << ","
        << data->BidPx[9] << ","
        << data->BidVol[0] << ","
        << data->BidVol[1] << ","
        << data->BidVol[2] << ","
        << data->BidVol[3] << ","
        << data->BidVol[4] << ","
        << data->BidVol[5] << ","
        << data->BidVol[6] << ","
        << data->BidVol[7] << ","
        << data->BidVol[8] << ","
        << data->BidVol[9] << ","
        << data->OfferPx[0] << ","
        << data->OfferPx[1] << ","
        << data->OfferPx[2] << ","
        << data->OfferPx[3] << ","
        << data->OfferPx[4] << ","
        << data->OfferPx[5] << ","
        << data->OfferPx[6] << ","
        << data->OfferPx[7] << ","
        << data->OfferPx[8] << ","
        << data->OfferPx[9] << ","
        << data->OfferVol[0] << ","
        << data->OfferVol[1] << ","
        << data->OfferVol[2] << ","
        << data->OfferVol[3] << ","
        << data->OfferVol[4] << ","
        << data->OfferVol[5] << ","
        << data->OfferVol[6] << ","
        << data->OfferVol[7] << ","
        << data->OfferVol[8] << ","
        << data->OfferVol[9] << ","
        << data->Volume << ","
        << data->Turnover << ","
        << data->IOPV << ","
        << data->TotalBidVol << ","
        << data->TotalOfferVol << ","
        << data->TotalBidNumber << ","
        << data->TotalOfferNumber << ","
        << data->WithdrawBuyNumber << ","
        << data->WithdrawBuyVol << ","
        << data->WithdrawSellNumber << ","
        << data->WithdrawSellVol << ","
        << data->NumBidOrders << ","
        << data->NumOfferOrders << ","
        <<data->SecStatus
        << std::endl;
}


int main(int argc, char *argv[]) {
  TFMarketDataAPI *api = TFMarketDataAPI::createMarketDataApi(TFMDP_RMSCompressSubscribe);

  TMarketDataSPI *spi = new TMarketDataSPI(api);

  //api->subscribeMarketDataTopic(TFMDP_Restart);

  api->registerSpi(spi);
  api->init();
  api->join();


  //api->join();

  getchar();
  delete spi;
  spi = NULL;

  return 0;
}