
#pragma once

#ifndef TF_USER_API_DATATYPE_H
#define TF_USER_API_DATATYPE_H

enum TFMarketDataTagType:int
{
/*------股票------*/
/// 连续竞价个股行情快照
    Stock_Tick_Tag = 100,                   
/// 虚拟集合竞价个股行情快照
    Virtual_Stock_Tick_Tag = 101,           
/// 存量个股行情快照
    Repository_Stock_Tick_Tag = 109,        
/// 逐笔成交
    Stock_Transaction_Tag = 110,           
/// 逐笔委托
    Stock_Order_Tag = 120,                  
/// 委托队列
    Stock_Order_Queue_Tag = 121,            

/*------指数------*/
/// 指数行情快照
    Index_Tick_Tag = 200,                   
/// 存量指数行情快照
    Repository_Index_Tick_Tag = 209,       

/*------期权------*/
/// 期权行情快照
    Option_Tick_Tag = 300,                  
/// 存量期权行情快照
    Repository_Option_Tick_Tag = 309,       
/// 全真模拟期权行情快照
    Simoption_Tick_Tag = 400,               
/// 存量全真模拟期权行情快照
    Repository_Simoption_Tick_Tag = 409,    

/*------期货------*/
/// 期货行情快照
    Futures_Tick_Tag = 500,                
/// 存量期货行情快照
    Repository_Futures_Tick_Tag = 509,      
/// OTC报价行情
    OTCQuote_Tag = 600,                     
/// OTC存量报价行情
    Repository_OTCQuote_Tag = 609,     
/// OTC成交行情
    OTCTransaction_Msg = 610                       
};
enum TFMDPSubscribeMode :int
{
	TFMDP_Quick = 0,
	TFMDP_Restart = 1
};
    
/////////////////////////////////////////////////////////////////////////
///MDPType是一个行情类型
/////////////////////////////////////////////////////////////////////////
enum TFMDPType:char
{
///实时行情订阅
    TFMDP_RMSSubscribe = '1', 
///实时行情组播
    TFMDP_RMSMulticast = '2', 
///历史行情订阅
    TFMDP_HMSSubscribe = '3', 
///实时指标订阅
    TFMDP_RISSubscribe = '4', 
///历史指标订阅
    TFMDP_HISSubscribe = '5', 
///OTC行情订阅
    TFMDP_ORMSSubscribe = '6', 
///实时行情压缩订阅
    TFMDP_RMSCompressSubscribe = 'a' 
};
   
/////////////////////////////////////////////////////////////////////////
///IndicatorType是一个指标类型
/////////////////////////////////////////////////////////////////////////
enum TFIndicatorType:char
{
///K线
    TFIndicator_KBAR = '1', 
///均线
    TFIndicator_MA = '2' 
};
   
/////////////////////////////////////////////////////////////////////////
///CallOrPutType是一个认购认沽
/////////////////////////////////////////////////////////////////////////
enum TFCallOrPutType:char
{
///认购
    TFCallOrPut_CALL = 'C', 
///认沽
    TFCallOrPut_PUT = 'P' 
};
   
/////////////////////////////////////////////////////////////////////////
///TFQuoteType是一个行情订阅类型
/////////////////////////////////////////////////////////////////////////
enum TFQuoteType: int
{          
///实时行情逐笔成交
    TFQuote_RMSTransaction = 1000, 
///实时行情股票快照
    TFQuote_RMSStockTick = 1001, 
///实时行情指数快照
    TFQuote_RMSIndexTick = 1002, 
///实时行情期权快照
    TFQuote_RMSOptionTick = 1003, 
///实时行情期货快照
    TFQuote_RMSFutureTick = 1004, 
///实时行情逐笔委托
    TFQuote_RMSTransactionOrder = 1005, 
///实时行情委托队列
    TFQuote_RMSOrderQueue = 1006, 
///历史行情逐笔成交
    TFQuote_HMSTransaction = 2000, 
///历史行情股票快照
    TFQuote_HMSStockTick = 2001, 
///历史行情指数快照
    TFQuote_HMSIndexTick = 2002, 
///历史行情期权快照
    TFQuote_HMSOptionTick = 2003, 
///历史行情期货快照
    TFQuote_HMSFutureTick = 2004, 
///实时行情指标
    TFQuote_RISIndicator = 3000, 
///历史行情指标
    TFQuote_HISIndicator = 4000, 
///OTC行情
    TFQuote_ORMS = 5000 
};
   
/////////////////////////////////////////////////////////////////////////
///TFPeriodType是一个周期长度
/////////////////////////////////////////////////////////////////////////
enum TFPeriodType: int
{          
///1分钟线
    TFPeriod_MIN1 = 1, 
///3分钟线
    TFPeriod_MIN3 = 3, 
///5分钟线
    TFPeriod_MIN5 = 5, 
///15分钟线
    TFPeriod_MIN15 = 15, 
///30分钟线
    TFPeriod_MIN30 = 30, 
///60分钟线
    TFPeriod_MIN60 = 60, 
///日线
    TFPeriod_DAY = 100, 
///周线
    TFPeriod_WEEK = 110, 
///月线
    TFPeriod_MONTH = 120, 
///季线
    TFPeriod_QUARTER = 130, 
///年线
    TFPeriod_YEAR = 140 
};
   
/////////////////////////////////////////////////////////////////////////
///TFSecurityType是一个行情类型组
/////////////////////////////////////////////////////////////////////////
enum TFSecurityType: int
{          
///股票
    TFSecurity_STOCK = 10, 
///债券
    TFSecurity_BOND = 11, 
///基金
    TFSecurity_FUND = 12, 
///指数
    TFSecurity_INDEX = 13, 
///权证
    TFSecurity_WARRANT = 14, 
///回购
    TFSecurity_REPURCHASE = 15, 
///期货
    TFSecurity_FUTURE = 16, 
///期权
    TFSecurity_OPTION = 17, 
///其他
    TFSecurity_OTHERS = 18, 
///互换
    TFSecurity_EXCHANGE = 19 
};
   
/////////////////////////////////////////////////////////////////////////
///TFExIDType 是一个交易所代码类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFExIDType[8];
    
/////////////////////////////////////////////////////////////////////////
///TFSecIDType 是一个合约代码类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFSecIDType[20];
    
/////////////////////////////////////////////////////////////////////////
///TFErrorMsgType 是一个错误信息类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFErrorMsgType[128];
    
/////////////////////////////////////////////////////////////////////////
///TFUserIDType 是一个登录账号类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFUserIDType[12];
    
/////////////////////////////////////////////////////////////////////////
///TFUserPasswordType 是一个登录密码类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFUserPasswordType[40];
    
/////////////////////////////////////////////////////////////////////////
///TFVersionType 是一个版本号类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFVersionType[10];
    
/////////////////////////////////////////////////////////////////////////
///TFIPAddressType 是一个IP地址类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFIPAddressType[16];
    
/////////////////////////////////////////////////////////////////////////
///TFSecNameType 是一个证券名称类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFSecNameType[32];
    
/////////////////////////////////////////////////////////////////////////
///TFContractIDType 是一个期权合约代码类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFContractIDType[32];
    
/////////////////////////////////////////////////////////////////////////
///TFUnderlyingSecIDType 是一个标的证券编号类型定义
/////////////////////////////////////////////////////////////////////////
typedef char TFUnderlyingSecIDType[32];
    
#endif
  