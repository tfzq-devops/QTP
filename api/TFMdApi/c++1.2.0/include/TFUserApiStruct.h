


#ifndef TF_USER_API_DATA_STRUCT_H
#define TF_USER_API_DATA_STRUCT_H
#pragma once
#include <cstring>
#include "TFUserApiDataType.h"
#include <stdint.h>



#pragma pack(1)
#pragma warning (disable: 4200)//忽略零长数组warning

 struct TFStockTickDataField{
    int Type;               // 行情类型
    uint32_t Seq;             // 消息序号
    char ExID[6];           // 交易所代码
    char SecID[8];          // 证券代码
    //char SecName[8];      // 证券名称 
    int ExTime;             // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;          // 本地时间
    int TradeDate;          // 交易日期
    int64_t PreClosePx;       // 前收盘
    int64_t OpenPx;           // 当日开盘价
    int64_t HighPx;           // 当日最高价
    int64_t LowPx;            // 当日最低价
    int64_t LastPx;           // 最新价
    int64_t UpLimitPx;        // 涨停
    int64_t DownLimitPx;      // 跌停
    int64_t BidPx[10];        // 委买价
    int64_t BidVol[10];       // 委买量
    int64_t OfferPx[10];      // 委卖价
    int64_t OfferVol[10];     // 委卖量
    int64_t Volume;           // 成交量
    double Turnover;        // 成交金额
    int64_t IOPV;             // 基金净值

    int64_t TotalBidVol;      // 委买总量
    int64_t TotalOfferVol;    // 委卖总量

    int TotalBidNumber;     // 买入总笔数
    int TotalOfferNumber;   // 卖出总笔数
    int WithdrawBuyNumber;  // 买入撤单笔数
    int64_t WithdrawBuyVol;   // 买入撤单数量
    int WithdrawSellNumber; // 卖出撤单笔数
    int64_t WithdrawSellVol;  // 卖出撤单数量
    int NumBidOrders;   // 买方委托价位数
    int NumOfferOrders; // 卖方委托价位数

    int64_t WAvgBidPx;       //加权平均委买价格
    int64_t WAvgOfferPx;     //加权平均委卖价格

	/*For SZ, 第0位，S=启动(开市前)，
	O=开盘前集合竞价
	T=连续竞价
	B=休市
	C=收盘集合竞价
	E=已闭市
	H=临时停牌
	A=盘后交易
	V=波动性中断
	第1位，0=正常状态
	1=全天停牌
	For SH, 第0位，S=启动（开市前）时段
	T=表示连续交易时段
	B=休市时段
	C=集合竞价时段
	E=闭市时段
	P=产品停牌
	M=可恢复交易的熔断时段（盘中集合竞价）
	N=表示不可恢复交易的熔断时段（暂停交易至闭市）
	D=开盘集合竞价阶段结束到连续竞价阶段开始之前的时段（如有）
	第1位，0=此产品不可正常交易；
	1=产品可正常交易，
	空格=无意义
	第2位，0=未上市
	1=已上市
	第3位，0=此产品在当前时段不接受进行新订单申报
	1=此产品在当前时段可接受进行新订单申报
	空格=无意义
	*/
	unsigned char SecStatus;

    TFStockTickDataField()
    {
        memset(this, 0, sizeof(TFStockTickDataField));
    }
};

struct TFIndexDataField{
    int Type;               // 行情类型
    uint32_t Seq;             // 消息序号
    char ExID[6];           // 交易所代码
    char SecID[8];          // 证券代码
    //char SecName[8];      // 证券名称 
    int ExTime;             // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;          // 本地时间
    int TradeDate;          // 交易日期
    int64_t PreClosePx;       // 前收盘指数
    int64_t OpenPx;           // 今开盘指数
    int64_t HighPx;           // 最高指数
    int64_t LowPx;            // 最低指数
    int64_t LastPx;           // 最新指数
    int TradeTime;          // 成交时间
    double Turnover;        // 参与计算相应指数的成交金额
    int64_t Volume;           // 参与计算相应指数的交易数量
    int64_t ClosePx;          // 今日收盘指数（大于0为有效值）
    unsigned char Currency; // 币种 - 0：人民币; 1：港币; 2：美元; 3：台币; 4：日元

    TFIndexDataField()
    {
        memset(this, 0, sizeof(TFIndexDataField));
    }
};

struct TFTransactionDataField{
    int Type;               // 行情类型
    uint32_t Seq;             // 消息序号
    char ExID[6];           // 交易所代码
    char SecID[8];          // 证券代码
    int ExTime;             // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;          // 本地时间
    int TradeTime;          // 成交时间,Int格式: 14:30:25.060 = 143025060
    int64_t TradePx;       // 成交价格
    int64_t Volume;           // 成交量
    double Turnover;        // 成交金额

    int64_t TradeBuyNo;         // 上交所买方订单号，深交所买方委托索引
    int64_t TradeSellNo;        // 上交所卖方订单号，深交所卖方委托索引

    /*
    逐笔成交执行标志
    上交所:
    B:      外盘,主动买,
    S:      内盘,主动卖,
    N:     未知

    深交所:
    4:       主动或自动撤单执行
    F:     成交执行
    */
    char TradeFlag;
    int TradeDate;               // 交易日期

    TFTransactionDataField()
    {
        memset(this, 0, sizeof(TFTransactionDataField));
    }
};

struct TFOrderDataField{
    int Type;               // 行情类型
    uint32_t Seq;             // 消息序号
    char ExID[6];           // 交易所代码
    char SecID[8];          // 证券代码
    int ExTime;             // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;          // 本地时间

    int64_t OrderPx;                //委托价格
    int64_t OrderVol;         //  委托数量
    char  OrderSide;               //买卖方向,1=买2=卖G=借入F=借出
    char OrderType;           //订单类别1=市价2=限价U=本方最优
    int OrderTime;      // 委托时间（百分之一秒）,14302506表示 14:30:25.06
	int64_t TradeNo;		// 深交所委托索引
    int TradeDate;               // 交易日期

    TFOrderDataField()
    {
        memset(this, 0, sizeof(TFOrderDataField));
    }
};


struct TFOptionDataField{
    int Type;                    // 行情类型
    uint32_t Seq;                  // 消息序号
    char ExID[6];                // 交易所代码
    char SecID[10];              // 期权代码
    int ExTime;                  // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;               // 本地时间
    int TradeDate;               // 交易日期
    int64_t PreSettlementPx;           // 昨日结算价
    int64_t ClosePx;               // 收盘价
    int64_t OpenPx;                // 开盘价
    int64_t HighPx;                // 最高价
    int64_t LowPx;                 // 最低价
    int64_t LastPx;                // 现价
    int64_t AuctionPx;          // 波动性中断参考价
    int64_t AuctionVol;            // 波动性中断集合竞价虚拟匹配量
    int64_t TotalLongPosition;     // 总持仓量
    int64_t BidPx[5];              // 委买价
    int64_t BidVol[5];             // 委买量
    int64_t OfferPx[5];            // 委卖价
    int64_t OfferVol[5];           // 委卖量
    int64_t Volume;                // 成交量
    double Turnover;             // 成交额

    /* 该字段为8位字符串，左起每位表示特定的含义，无定义则填空格。
    第1位：    ‘S’表示启动（开市前）时段
    ‘C’表示集合竞价时段
    ‘T’表示连续交易时段
    ‘B’表示休市时段
    ‘E’表示闭市时段
    ‘V’表示波动性中断
    ‘P’表示临时停牌
    ‘U’表示收盘集合竞价
    ‘M’表示可恢复交易的熔断（盘中集合竞价）
    ‘N’表示不可恢复交易的熔断（暂停交易至闭市）
    第2位：    ‘0’表示未连续停牌
    ‘1’表示连续停牌。（保留，暂不使用；暂时填空格）
    第3位：    ‘0’表示不限制开仓
    ‘1’表示限制备兑开仓
    ‘2’表示限制卖出开仓
    ‘3’表示限制卖出开仓、备兑开仓
    ‘4’表示限制买入开仓
    ‘5’表示限制买入开仓、备兑开仓
    ‘6’表示限制买入开仓、卖出开仓
    ‘7’表示限制买入开仓、卖出开仓、备兑开仓。
    第4位：    ‘0’表示此产品在当前时段不接受进行新订单申报
    ‘1’ 表示此产品在当前时段可接受进行新订单申报。
    第5 - 8位：保留。 */
    char TradingPhaseCode[10];    // 状态位 

    int OrigTime;

    int64_t SettlementPx;              // 今日结算价
    int64_t PreClosePx;            // 昨日收盘价

    TFOptionDataField()
    {
        memset(this, 0, sizeof(TFOptionDataField));
    }
};

// 中国金融期货交易所 [5/26/2016 nidalei]
struct TFFuturesTickDataField
{
    int Type;                  // 行情类型
    uint32_t Seq;                // 消息序号
    char ExID[6];              // 交易所代码
    char SecID[32];            // 证券代码
    int ExTime;                // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;             // 本地时间
    int TradeDate;             // 交易日期
    char SettlementGroupID[9]; // 结算组代码
    int SettlementID;          // 结算编号
    int64_t PreSettlementPx;     // 昨结算
    int64_t PreClosePx;          // 前收盘
    int64_t PreOpenInterest;     // 昨持仓量
    double PreDelta;           // 昨虚实度
    int64_t OpenPx;              // 当日开盘价
    int64_t HighPx;              // 当日最高价
    int64_t LowPx;               // 当日最低价
    int64_t ClosePx;             // 当日收盘价
    int64_t UpLimitPx;           // 涨停
    int64_t DownLimitPx;         // 跌停
    int64_t SettlementPx;        // 今结算
    double CurrDelta;          // 今虚实
    int64_t LastPx;              // 最新价
    int64_t Volume;              // 成交量
    double Turnover;           // 成交金额
    int64_t OpenInterest;        // 持仓量

    int64_t BidPx[5];            // 委买价
    int64_t BidVol[5];           // 委买量
    int64_t OfferPx[5];          // 委卖价
    int64_t OfferVol[5];         // 委卖量
    char TFlag;                //日夜盘标志
    /*
    日夜盘盘标志
    0:      夜盘,
    1:      日盘,
    */
    int LocalDate;             //本地日期
    TFFuturesTickDataField()
    {
        memset(this, 0, sizeof(TFFuturesTickDataField));
    }
};

/* Note: A complete "OrderQueueData" consists of "OrderQueueDataHead" and "OrderQueueDataBody" likes following:
| OrderQueueDataHead | int64_t,int64_t,int64_t,...
Each "int64_t" denotes the Vol of one order. The count of "int64_t" is specified by "OrderCount" of OrderQueueDataHead
*/
struct TFOrderQueueDataHeadField
{
    int Type;               // 行情类型
    uint32_t Seq;             // 消息序号
    char ExID[6];           // 交易所代码
    char SecID[8];          // 证券代码
    //char SecName[8];      // 证券名称 
    int ExTime;             // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;          // 本地时间
    int TradeDate;          // 交易日期
    int64_t LastPx;           // 委托价格
    /*
    买卖盘标志
    B:      买盘,
    S:      卖盘,
    */
    char TradeFlag;
    int OrderCount;         // 委托笔数
    int64_t OrderQueue[];    //柔性数据，用于拓展   
    TFOrderQueueDataHeadField()
    {
        memset(this, 0, sizeof(TFOrderQueueDataHeadField));
    }
};

struct TFOTCQuoteDataField
{
    int Type;               // 行情类型
    uint32_t Seq;             // 序号
    char ExID[32];          // 交易所代码，例如150016.IB中的IB
    char SecID[32];         // 债券代码，例如150016.IB中的150016
    char SecName[32];       // 债券名称
    int ExTime;             // 交易所时间
    int LocalTime;          // 本地时间
    int TradeDate;        // 交易日，格式为20160810   
    char SettleType;        // 清算类型；‘0’:T+0,‘1’:T+1

    /* 报价类型:
    0：收益率，如果是收益率则需要填BidYield,OfferYield两个数组的内容
    1：净价，如果是净价那么需要填写BidPx,OfferPx的内容 */
    char PxType;
    int64_t UpLimitPx;    // 涨停价
    int64_t DownLimitPx;  // 跌停价
    int64_t LastPx;       // 最新市场成交价
    int64_t Turnover;     // 成交总量(面额)

    int64_t BidPx[10];     // 净价
    int64_t BidYield[10];     // 收益率
    int64_t BidVol[10];       // 订单量
    char BidInstitute[10][32];  // 机构名
    char BidTrader[10][32];     // 参与者
    /* 通道名，缩写和对应中文名如下:
    "CFIC"：国际经纪
    "TPSC"：国利经纪
    "CBBJ"：BGC经纪
    "PATR"：平安经纪
    "TJXT"：信唐经纪
    "CFETS"：外汇交易中心 */
    char BidBroker[10][32];
    char BidText[10][32];       // 附加信息

    int64_t OfferPx[10];       // 净价
    int64_t OfferYield[10];       // 收益率
    int64_t OfferVol[10];         // 订单量
    char OfferInstitute[10][32];    // 机构名
    char OfferTrader[10][32];       // 参与者
    char OfferBroker[10][32];       // 中介
    char OfferText[10][32];         // 附加信息

    TFOTCQuoteDataField()
    {
        memset(this, 0, sizeof(TFOTCQuoteDataField));
    }
};

struct TFOTCTransactionDataField
{
    int Type;               // 行情类型
    uint32_t Seq;         // 消息序号
    int GatewayID;      // 网关ID；1-CMDS, 2-Wind, 3-Sumscope
    char SecID[16];     // 证券代码
    char SecName[32];   // 证券名称   
    char ExID[16];      // 交易所代码
    int ExTime;         // 交易所时间
    int LocalTime;      // 本地时间
    int TradeDate;      // 交易日期
    char TransID[40];   // 成交行情编号

    char Side;          // 成交方向；'x'-taken,'y'-given,'z'-trade
    char TransStatus;   // 成交状态；'0'-New,'4'-Canceled,'5'-Replace,'7'-Stopped,'8'-Rejected,'F'-Trade,'H'-Trade Cancel
    char TransType;     // 交易类型；'0'-指定做市，'1'-非做市，'2'-全部(做市)，'3'-尝试做市，'4'-买方做市，'5'-卖方做市 
    int64_t Price;        // 净价
    int64_t Yield;        // 收益率
    int64_t Volume;          // 成交量
    char dealStatus;    // 交易状态；'0'-待双方确认 '1'-待单方确认 '2'-双方都已确认 '3'-已完成 '4'-已作废 '5'-已取消

    TFOTCTransactionDataField()
    {
        memset(this, 0, sizeof(TFOTCTransactionDataField));
    }
};

//K线指标内容结构体定义
struct TFMarketIndicatorField
{
    TFSecurityType   Type;               // 行情类型组
    char  ExID[6];             // 交易所代码
    char  SecID[32];           // 证券代码
    int   KSeq;                // k线序列号
    int64_t KScore;              // k线唯一索引号
    TFPeriodType   KType;               // K线类型，1，3，5，15，30，60，100为日线
    int   TradeDate;           // 交易日期
    //int64_t UpLimitPx;           // 涨停
    //int64_t LowLimitPx;          // 跌停
    //int64_t PreSettlementPx;     // 昨结算
    //int64_t PreClosePx;          // 前收盘
    int64_t OpenPx;              // 开盘价
    int64_t HighPx;              // 最高价
    int64_t LowPx;               // 最低价
    int64_t LastPx;              // 最新价
    //int64_t ClosePx;             // 收盘价
    //int64_t SettlementPx;        // 今结算
    int64_t Volume;              // 成交量
    double Turnover;           // 成交金额

    TFMarketIndicatorField()
    {
        memset(this, 0, sizeof(TFMarketIndicatorField));
    }
};

//回测专用K线指标内容结构体定义
struct TFBTIndicatorField
{
    int Type;                  // 行情类型
    uint32_t Seq;              // 消息序号
    char  ExID[6];             // 交易所代码
    char  SecID[32];           // 证券代码
    int   TradeDate;           // 交易日期
    int ExTime;                // 交易所时间,Int格式: 10:01:02 000 = 100102000
    int LocalTime;             // 本地时间
    int64_t OpenPx;              // 开盘价
    int64_t HighPx;              // 最高价
    int64_t LowPx;               // 最低价
    int64_t LastPx;              // 最新价
    int64_t Volume;              // 成交量
    double Turnover;           // 成交金额
    int64_t BidPx;            // 委买价
    int64_t BidVol;           // 委买量
    int64_t OfferPx;          // 委卖价
    int64_t OfferVol;         // 委卖量
    int LocalDate;             //本地日期
    TFBTIndicatorField()
    {
        memset(this, 0, sizeof(TFBTIndicatorField));
    }
};

    
///订阅合约
struct TFQuoteSubField
{
    ///行情订阅类型
    TFQuoteType Quote;
    ///交易所代码
    TFExIDType ExID; 
    ///合约代码
    TFSecIDType SecID; 
    ///开始日期
    int BeginDate;
    ///结束日期
    int EndDate;
    ///周期长度
    TFPeriodType Period;
    ///预留字段
    int ThirdReff;
      
    ///initialized to zero
    TFQuoteSubField(){
        memset(this, 0 , sizeof(TFQuoteSubField));
    }
};
    
///合约代码
struct TFCodeKeyField
{
    ///交易所代码
    TFExIDType ExID; 
    ///合约代码
    TFSecIDType SecID; 
      
    ///initialized to zero
    TFCodeKeyField(){
        memset(this, 0 , sizeof(TFCodeKeyField));
    }
};
    
///合约代码信息
struct TFCodeInfoField
{
    ///交易所代码
    TFExIDType ExID; 
    ///合约代码
    TFSecIDType SecID; 
    ///证券类型
    int SecType;
    ///证券名称
    TFSecNameType SecName; 
    ///最小变动价单位
    double MinPriceFluction;
    ///合约乘数
    int Multiplie;
    ///期权合约代码
    TFContractIDType ContractID; 
    ///标的证券编号
    TFUnderlyingSecIDType UnderlyingSecID; 
    ///认购认沽
    TFCallOrPutType CallOrPut;
    ///期权行权日
    int ExerciseDate;
    ///期权首个交易日
    int StartDate;
    ///结束日期
    int EndDate;
    ///期权到期日
    int ExpireDate;
      
    ///initialized to zero
    TFCodeInfoField(){
        memset(this, 0 , sizeof(TFCodeInfoField));
    }
};
    
///错误状态
struct TFErrorInfoField
{
    ///错误代码
    int ErrorID;
    ///错误信息
    TFErrorMsgType ErrorMsg; 
      
    ///initialized to zero
    TFErrorInfoField(){
        memset(this, 0 , sizeof(TFErrorInfoField));
    }
};
    
///登录信息
struct TFLoginInfoField
{
    ///登录账号
    TFUserIDType UserID; 
    ///登录密码
    TFUserPasswordType UserPassword; 
    ///版本号
    TFVersionType Version; 
    ///IP地址
    TFIPAddressType IPAddress; 
      
    ///initialized to zero
    TFLoginInfoField(){
        memset(this, 0 , sizeof(TFLoginInfoField));
    }
};
    
#pragma pack()
    
#endif
  