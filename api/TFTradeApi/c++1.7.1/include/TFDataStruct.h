
#pragma once

#ifndef TF_DATA_STRUCT_H
#define TF_DATA_STRUCT_H

#include "string.h"
#include "TFDataType.h"

namespace tfzq{ namespace stp{
 
    
///交易日期
struct TFTradeDateField
{
    ///交易通道编号
    int ChannelID;
    ///交易日
    int TradingDay;
    ///下一交易日
    int NextTradingDay;
    ///系统状态
    char SystemStatus;
    ///必须初始化
    int Required;
      
    ///initialized to zero
    TFTradeDateField(){
        memset(this, 0 , sizeof(TFTradeDateField));
    }
};
    
///期权合约
struct TFInstrumentField
{
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///产品代码
    char ProductID[TF_PRODUCTID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///证券交易代码
    char InstrumentCode[TF_INSTRUMENTCODE_LEN]; 
    ///合约名称
    char InstrumentName[TF_INSTRUMENTNAME_LEN]; 
    ///证券类别
    char ProductClass;
    ///合约数量乘数
    int VolumeMultiple;
    ///最小变动价位
    double PriceTick;
    ///上市日
    int OpenDate;
    ///到期日
    int ExpireDate;
    ///当前是否交易
    int IsTrading;
    ///期权执行价格
    double ExecPrice;
    ///期权单手保证金
    double UnitMargin;
    ///交易日
    int TradingDay;
    ///行权日
    int ExerciseDay;
    ///开始交割日
    int StartDeliveryDay;
    ///结束交割日
    int EndDeliveryDay;
    ///市价最大下单量
    int MaxMarketOrderVolume;
    ///市价最小下单量
    int MinMarketOrderVolume;
    ///限价最大下单量
    int MaxLimitOrderVolume;
    ///限价最小下单量
    int MinLimitOrderVolume;
    ///涨停板价
    double UpperLimitPrice;
    ///跌停板价
    double LowerLimitPrice;
    ///期权类型
    char OptionType;
    ///最小买入变动手数
    int BuyVolumeTick;
    ///最小卖出变动手数
    int SellVolumeTick;
    ///基础商品代码
    char UnderlyingInstrumentID[TF_UNDERLYINGINSTRUMENTID_LEN]; 
    ///基础商品乘数
    int UnderlyingMultiple;
    ///回报证券标志
    char StockRealBack;
    ///回报资金标志
    char FundRealBack;
    ///期权执行方式
    char UnderlyingType;
    ///昨收盘价
    double PreClosePrice;
    ///上次结算价
    double PreSettlementPrice;
    ///临近到期保证金上浮比率
    double MarginRatioExpiring;
    ///交易通道编号
    int ChannelID;
    ///证券二级类别
    char SubProductClass;
      
    ///initialized to zero
    TFInstrumentField(){
        memset(this, 0 , sizeof(TFInstrumentField));
    }
};
    
///公司信息
struct TFCompanyField
{
    ///公司编号
    int CompanyID;
    ///公司名称
    char CompanyName[TF_COMPANYNAME_LEN]; 
    ///公司类型
    char CompanyType;
    ///联系人
    char LinkMan[TF_LINKMAN_LEN]; 
    ///联系地址
    char Address[TF_ADDRESS_LEN]; 
    ///联系电话
    char Tel[TF_TEL_LEN]; 
    ///电子邮箱
    char Email[TF_EMAIL_LEN]; 
      
    ///initialized to zero
    TFCompanyField(){
        memset(this, 0 , sizeof(TFCompanyField));
    }
};
    
///公司操作员信息
struct TFOperatorField
{
    ///操作员代码
    int OperatorID;
    ///公司编号
    int CompanyID;
    ///操作员名称
    char OperatorName[TF_OPERATORNAME_LEN]; 
    ///密码
    char Password[TF_PASSWORD_LEN]; 
    ///操作员角色
    char OpRoles[TF_OPROLES_LEN]; 
    ///(已废除)操作员可以查询的账户集合
    char QryAccountIDs[TF_QRYACCOUNTIDS_LEN]; 
    ///(已废除)操作员可以操作的账户集合
    char OpAccountIDs[TF_OPACCOUNTIDS_LEN]; 
    ///操作员可以查询的组合集合
    char QryComboIDs[TF_QRYCOMBOIDS_LEN]; 
    ///操作员可以操作的组合集合
    char OpComboIDs[TF_OPCOMBOIDS_LEN]; 
    ///操作员电话
    char OpTel[TF_OPTEL_LEN]; 
    ///操作员邮箱
    char OpEmail[TF_OPEMAIL_LEN]; 
    ///注册时间
    char RegiDate[TF_REGIDATE_LEN]; 
    ///状态标志
    char EnbFlag;
    ///修改时间
    char UptTime[TF_UPTTIME_LEN]; 
    ///登录时间
    char LogTime[TF_LOGTIME_LEN]; 
    ///密码修改时间
    char PwdUptTime[TF_PWDUPTTIME_LEN]; 
    ///登录错误时间
    char LogErrTime[TF_LOGERRTIME_LEN]; 
    ///密码错误次数
    int PwdErrCnt;
    ///备注
    char Remark[TF_REMARK_LEN]; 
    ///公司类型
    char CompanyType;
    ///MAC地址列表
    char MacAddresses[TF_MACADDRESSES_LEN]; 
    ///允许外部接入标志
    bool EnbInternet;
      
    ///initialized to zero
    TFOperatorField(){
        memset(this, 0 , sizeof(TFOperatorField));
    }
};
    
///系统权限信息
struct TFAuthInfoField
{
    ///权限ID
    char AuthID[TF_AUTHID_LEN]; 
    ///权限级别
    int AuthLevel;
    ///权限描述
    char AuthDesc[TF_AUTHDESC_LEN]; 
    ///父权限
    char ParentID[TF_PARENTID_LEN]; 
    ///是否有下级权限
    int HaveSon;
    ///顺序号
    int ID;
    ///状态标志
    char EnbFlag;
    ///缺省状态
    int IsDefault;
    ///权限是否作为功能显示在控台
    int IsDisplay;
    ///动作
    char Action[TF_ACTION_LEN]; 
    ///保留
    char Resv[TF_RESV_LEN]; 
    ///创建时间
    char CrtTime[TF_CRTTIME_LEN]; 
    ///最近一次更新时间
    char LastUptTime[TF_LASTUPTTIME_LEN]; 
    ///功能类型
    char ActionType;
    ///权限类型
    char AuthType;
      
    ///initialized to zero
    TFAuthInfoField(){
        memset(this, 0 , sizeof(TFAuthInfoField));
    }
};
    
///操作员权限信息
struct TFOpAuthInfoField
{
    ///操作员代码
    int OperatorID;
    ///权限ID
    char AuthID[TF_AUTHID_LEN]; 
    ///状态标志
    char EnbFlag;
    ///最近一次使用时间
    char LastUsrTime[TF_LASTUSRTIME_LEN]; 
    ///使用次数
    int UsrCount;
    ///保留
    char Resv[TF_RESV_LEN]; 
    ///创建时间
    char CrtTime[TF_CRTTIME_LEN]; 
    ///最近一次更新时间
    char LastUptTime[TF_LASTUPTTIME_LEN]; 
      
    ///initialized to zero
    TFOpAuthInfoField(){
        memset(this, 0 , sizeof(TFOpAuthInfoField));
    }
};
    
///接口权限
struct TFIntefAuthInfoField
{
    ///接口标识
    char CmdID[TF_CMDID_LEN]; 
    ///权限ID
    char AuthID[TF_AUTHID_LEN]; 
      
    ///initialized to zero
    TFIntefAuthInfoField(){
        memset(this, 0 , sizeof(TFIntefAuthInfoField));
    }
};
    
///操作员日志
struct TFOpLogField
{
    ///系统日期
    int SysDate;
    ///系统时间
    int SysTime;
    ///操作员代码
    int OperatorID;
    ///动作
    char Action[TF_ACTION_LEN]; 
    ///动作描述
    char ActionDesc[TF_ACTIONDESC_LEN]; 
      
    ///initialized to zero
    TFOpLogField(){
        memset(this, 0 , sizeof(TFOpLogField));
    }
};
    
///角色信息
struct TFRoleField
{
    ///角色号
    char RoleID[TF_ROLEID_LEN]; 
    ///角色名称
    char RoleName[TF_ROLENAME_LEN]; 
    ///公司类型
    char CompanyType;
      
    ///initialized to zero
    TFRoleField(){
        memset(this, 0 , sizeof(TFRoleField));
    }
};
    
///角色权限信息
struct TFRoleAuthField
{
    ///角色号
    char RoleID[TF_ROLEID_LEN]; 
    ///权限ID
    char AuthID[TF_AUTHID_LEN]; 
      
    ///initialized to zero
    TFRoleAuthField(){
        memset(this, 0 , sizeof(TFRoleAuthField));
    }
};
    
///下载文件列表
struct TFFileDownloadField
{
    ///系统日期
    int SysDate;
    ///系统流水
    char SysSeqID[TF_SYSSEQID_LEN]; 
    ///操作员代码
    int OperatorID;
    ///文件名称
    char FileName[TF_FILENAME_LEN]; 
    ///文件存储路径
    char FileUrl[TF_FILEURL_LEN]; 
    ///文件查询条件
    char FileInfo[TF_FILEINFO_LEN]; 
    ///请求执行状态
    char FileFlag;
    ///后缀文件类型
    char FilePostFix[TF_FILEPOSTFIX_LEN]; 
    ///文件生成日期
    int CreateDate;
    ///文件生成时间
    int CreateTime;
    ///更新日期
    int UpdateDate;
    ///最后修改时间
    int UpdateTime;
      
    ///initialized to zero
    TFFileDownloadField(){
        memset(this, 0 , sizeof(TFFileDownloadField));
    }
};
    
///控台序列表
struct TFCmdSequenceField
{
    ///序列名称
    char SeqName[TF_SEQNAME_LEN]; 
    ///当前序列值
    int CurrentVal;
    ///当前增长值
    int IncrementVal;
      
    ///initialized to zero
    TFCmdSequenceField(){
        memset(this, 0 , sizeof(TFCmdSequenceField));
    }
};
    
///操作员行情配置信息
struct TFOpMarketField
{
    ///公司编号
    int CompanyID;
    ///行情配置类型
    char MarketDataType;
    ///操作员代码
    int OperatorID;
    ///允许连接个数
    int LimitConNum;
    ///允许订阅个数
    int LimitSubNum;
    ///连接IP地址白名单
    char IpAddress[TF_IPADDRESS_LEN]; 
      
    ///initialized to zero
    TFOpMarketField(){
        memset(this, 0 , sizeof(TFOpMarketField));
    }
};
    
///公司行情缴费信息
struct TFMarketDataPayField
{
    ///公司编号
    int CompanyID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///缴费科目
    char PaySubject;
    ///最近缴费时间
    char LastPayTime[TF_LASTPAYTIME_LEN]; 
    ///缴费金额
    double PayBalance;
    ///起始日期
    int StartDate;
    ///到期日期
    int EndDate;
      
    ///initialized to zero
    TFMarketDataPayField(){
        memset(this, 0 , sizeof(TFMarketDataPayField));
    }
};
    
///公司行情缴费流水
struct TFMarketDataPayFlowField
{
    ///流水序号
    int PayID;
    ///公司编号
    int CompanyID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///缴费科目
    char PaySubject;
    ///缴费时间
    char PayTime[TF_PAYTIME_LEN]; 
    ///缴费金额
    double PayBalance;
    ///起始日期
    int StartDate;
    ///到期日期
    int EndDate;
      
    ///initialized to zero
    TFMarketDataPayFlowField(){
        memset(this, 0 , sizeof(TFMarketDataPayFlowField));
    }
};
    
///账户信息
struct TFAccountField
{
    ///账户编号
    int AccountID;
    ///公司编号
    int CompanyID;
    ///资金账户名称
    char AccountName[TF_ACCOUNTNAME_LEN]; 
    ///投资者代码
    int InvestorID;
    ///账户类型
    char AccountType;
    ///状态标志
    char EnbFlag;
    ///交易日
    int TradingDay;
    ///交易通道编号
    int ChannelID;
    ///默认组合
    int DefaultCombo;
    ///期权账户保证金浮动率
    double MarginRatio;
      
    ///initialized to zero
    TFAccountField(){
        memset(this, 0 , sizeof(TFAccountField));
    }
};
    
///投资组合
struct TFAccountComboField
{
    ///组合编号
    int ComboID;
    ///账户编号
    int AccountID;
    ///组合名称
    char ComboName[TF_COMBONAME_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///投资组合对应的合约代码
    char KeyInstrumentID[TF_KEYINSTRUMENTID_LEN]; 
    ///是否活跃
    int IsActive;
    ///缺省状态
    int IsDefault;
    ///交易日
    int TradingDay;
    ///允许日内交易
    bool DayTradeEnable;
      
    ///initialized to zero
    TFAccountComboField(){
        memset(this, 0 , sizeof(TFAccountComboField));
    }
};
    
///投资者信息
struct TFInvestorField
{
    ///投资者代码
    int InvestorID;
    ///交易日
    int TradingDay;
    ///经纪公司代码
    char BrokerID[TF_BROKERID_LEN]; 
    ///母账户代码
    char BrokerInvestorID[TF_BROKERINVESTORID_LEN]; 
    ///用户代码
    char UserID[TF_USERID_LEN]; 
    ///客户号
    char ClientID[TF_CLIENTID_LEN]; 
    ///资金账户代码
    char AccountCode[TF_ACCOUNTCODE_LEN]; 
    ///密码
    char Password[TF_PASSWORD_LEN]; 
    ///投资者名称
    char InvestorName[TF_INVESTORNAME_LEN]; 
    ///投资者类型
    char InvestorType;
    ///证件类型
    char IDCardType;
    ///证件号
    char IDCardNo[TF_IDCARDNO_LEN]; 
    ///是否活跃
    int IsActive;
    ///分组编号
    char GroupID[TF_GROUPID_LEN]; 
    ///O32操作员代码
    char O32OperatorNo[TF_O32OPERATORNO_LEN]; 
    ///O32操作员密码
    char O32OperatorPwd[TF_O32OPERATORPWD_LEN]; 
    ///O32基金代码
    char O32AccountCode[TF_O32ACCOUNTCODE_LEN]; 
    ///O32组合编号
    char O32CombiNo[TF_O32COMBINO_LEN]; 
    ///O32资产单元编号
    char O32AssetNo[TF_O32ASSETNO_LEN]; 
      
    ///initialized to zero
    TFInvestorField(){
        memset(this, 0 , sizeof(TFInvestorField));
    }
};
    
///投资者交易编码
struct TFTradingCodeField
{
    ///交易日
    int TradingDay;
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///交易编码类型
    char TradingCodeType;
    ///交易编码
    char TradeCode[TF_TRADECODE_LEN]; 
    ///营业部代码
    char BranchID[TF_BRANCHID_LEN]; 
    ///席位号
    char SeatID[TF_SEATID_LEN]; 
    ///投资者账户子编码
    char OptClientID[TF_OPTCLIENTID_LEN]; 
    ///是否活跃
    int IsActive;
      
    ///initialized to zero
    TFTradingCodeField(){
        memset(this, 0 , sizeof(TFTradingCodeField));
    }
};
    
///交易通道信息
struct TFTradeChannelField
{
    ///交易通道编号
    int ChannelID;
    ///通道名称
    char ChannelName[TF_CHANNELNAME_LEN]; 
    ///通道类型
    char ChannelType;
    ///分仓接口IP
    char SysIP[TF_SYSIP_LEN]; 
    ///分仓接口端口
    char SysPort[TF_SYSPORT_LEN]; 
    ///分仓其他配置
    char ChannelConfig[TF_CHANNELCONFIG_LEN]; 
    ///交易日
    int TradingDay;
      
    ///initialized to zero
    TFTradeChannelField(){
        memset(this, 0 , sizeof(TFTradeChannelField));
    }
};
    
///账户资金信息
struct TFAccountAssetField
{
    ///交易日
    int TradingDay;
    ///账户编号
    int AccountID;
    ///币种代码
    char CurrencyID[TF_CURRENCYID_LEN]; 
    ///上次存款额
    double PreDeposit;
    ///上次占用的保证金
    double PreMargin;
    ///上次结算准备金
    double PreBalance;
    ///当前资金
    double Balance;
    ///入金金额
    double Deposit;
    ///冻结的保证金
    double FrozenMargin;
    ///冻结的手续费
    double FrozenCommission;
    ///冻结的资金
    double FrozenCash;
    ///手工冻结的资金
    double ManualFrozenCash;
    ///核对调整资金
    double CheckCash;
    ///仓位占用保证金
    double UseMargin;
    ///手续费
    double Commission;
    ///可取资金
    double WithdrawQuota;
    ///保证金可用余额
    double Credit;
    ///现金
    double Available;
    ///平仓盈亏
    double CloseProfit;
    ///持仓盈亏
    double PositionProfit;
    ///资金差额
    double CashIn;
    ///出金金额
    double CashOut;
    ///缺省状态
    int IsDefault;
      
    ///initialized to zero
    TFAccountAssetField(){
        memset(this, 0 , sizeof(TFAccountAssetField));
    }
};
    
///查询账户资金信息
struct TFUserAccountAssetField
{
    ///账户编号
    int AccountID;
    ///资金账户名称
    char AccountName[TF_ACCOUNTNAME_LEN]; 
    ///当前资金
    double Balance;
    ///可用资金
    double EnableBalance;
    ///冻结的资金
    double FrozenCash;
    ///手工冻结的资金
    double ManualFrozenCash;
    ///核对调整资金
    double CheckCash;
    ///仓位占用保证金
    double UseMargin;
      
    ///initialized to zero
    TFUserAccountAssetField(){
        memset(this, 0 , sizeof(TFUserAccountAssetField));
    }
};
    
///账户持仓信息
struct TFAccountPositionField
{
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///持仓多空方向
    char PosiDirection;
    ///交易编码
    char TradeCode[TF_TRADECODE_LEN]; 
    ///交易编码类型
    char TradingCodeType;
    ///交易日
    int TradingDay;
    ///昨持仓
    double YdPosition;
    ///上次占用的保证金
    double PreMargin;
    ///今持仓
    double TodayPosition;
    ///总持仓
    double TotalPosition;
    ///仓位占用保证金
    double UseMargin;
    ///开仓量
    double OpenVolume;
    ///平仓量
    double CloseVolume;
    ///平昨仓量
    double CloseYdVolume;
    ///本次结算价
    double SettlementPrice;
    ///上次结算价
    double PreSettlementPrice;
    ///手续费
    double Commission;
    ///冻结的手续费
    double FrozenCommission;
    ///冻结的保证金
    double FrozenMargin;
    ///开仓成本
    double OpenCost;
    ///持仓成本
    double PositionCost;
    ///平仓盈亏
    double CloseProfit;
    ///持仓盈亏
    double PositionProfit;
    ///开仓金额
    double OpenAmount;
    ///平仓金额
    double CloseAmount;
    ///平昨仓金额
    double CloseYdAmount;
    ///多头冻结
    double LongFrozen;
    ///开仓冻结金额
    double LongFrozenAmount;
    ///空头冻结
    double ShortFrozen;
    ///开仓冻结金额
    double ShortFrozenAmount;
    ///冻结数量
    double FrozenVolume;
    ///手工冻结数量
    double ManualFrozenVolume;
    ///核对调整数量
    double CheckVolume;
    ///可用数量
    double EnableVolume;
      
    ///initialized to zero
    TFAccountPositionField(){
        memset(this, 0 , sizeof(TFAccountPositionField));
    }
};
    
///查询组合持仓信息
struct TFUserComboPositionField
{
    ///账户编号
    int AccountID;
    ///资金账户名称
    char AccountName[TF_ACCOUNTNAME_LEN]; 
    ///组合编号
    int ComboID;
    ///组合名称
    char ComboName[TF_COMBONAME_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///合约名称
    char InstrumentName[TF_INSTRUMENTNAME_LEN]; 
    ///昨持仓
    double YdPosition;
    ///今持仓
    double TodayPosition;
    ///总持仓
    double TotalPosition;
    ///昨仓冻结数量
    double YdFrozenVolume;
    ///今仓冻结数量
    double TodayFrozenVolume;
    ///冻结数量
    double FrozenVolume;
    ///手工冻结数量
    double ManualFrozenVolume;
    ///核对调整数量
    double CheckVolume;
    ///今仓核对调整数量
    double TodayCheckVolume;
    ///昨仓核对调整数量
    double YdCheckVolume;
    ///今仓可用数量
    double TodayEnableVolume;
    ///昨仓可用数量
    double YdEnableVolume;
    ///可用数量
    double EnableVolume;
    ///持仓成本
    double PositionCost;
    ///成本价
    double CostPrice;
    ///最新价
    double LastPrice;
    ///持仓市值
    double OpenMarketValue;
    ///浮动盈亏
    double FloatProfi;
    ///多头冻结
    double LongFrozen;
    ///空头冻结
    double ShortFrozen;
    ///日内初始数量
    int DayTradeInitVolume;
    ///日内可用数量
    int DayTradeAvailVolume;
    ///浮动盈亏
    double DayTradeFloatProfitLoss;
    ///日内持仓成本金额
    double DayTradePositionCost;
    ///日内平仓盈亏
    double DayTradeCloseProfit;
    ///日内累买
    double DayTradeAccumBuy;
    ///日内累卖
    double DayTradeAccumSell;
    ///日内持仓冻结数量
    int DayTradePosFrozen;
    ///持仓多空方向
    char PosiDirection;
    ///投机套保标志
    char HedgeFlag;
    ///平仓盈亏
    double CloseProfit;
    ///仓位占用保证金
    double UseMargin;
      
    ///initialized to zero
    TFUserComboPositionField(){
        memset(this, 0 , sizeof(TFUserComboPositionField));
    }
};
    
///组合持仓信息
struct TFComboPositionField
{
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///组合编号
    int ComboID;
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///持仓多空方向
    char PosiDirection;
    ///交易编码
    char TradeCode[TF_TRADECODE_LEN]; 
    ///交易编码类型
    char TradingCodeType;
    ///交易日
    int TradingDay;
    ///昨持仓
    double YdPosition;
    ///上次占用的保证金
    double PreMargin;
    ///今持仓
    double TodayPosition;
    ///总持仓
    double TotalPosition;
    ///仓位占用保证金
    double UseMargin;
    ///开仓量
    double OpenVolume;
    ///平仓量
    double CloseVolume;
    ///平昨仓量
    double CloseYdVolume;
    ///本次结算价
    double SettlementPrice;
    ///上次结算价
    double PreSettlementPrice;
    ///手续费
    double Commission;
    ///冻结的手续费
    double FrozenCommission;
    ///冻结的保证金
    double FrozenMargin;
    ///开仓成本
    double OpenCost;
    ///持仓成本
    double PositionCost;
    ///平仓盈亏
    double CloseProfit;
    ///持仓盈亏
    double PositionProfit;
    ///开仓金额
    double OpenAmount;
    ///平仓金额
    double CloseAmount;
    ///平昨仓金额
    double CloseYdAmount;
    ///多头冻结
    double LongFrozen;
    ///开仓冻结金额
    double LongFrozenAmount;
    ///空头冻结
    double ShortFrozen;
    ///开仓冻结金额
    double ShortFrozenAmount;
    ///昨仓冻结数量
    double YdFrozenVolume;
    ///今仓冻结数量
    double TodayFrozenVolume;
    ///冻结数量
    double FrozenVolume;
    ///手工冻结数量
    double ManualFrozenVolume;
    ///核对调整数量
    double CheckVolume;
    ///今仓核对调整数量
    double TodayCheckVolume;
    ///昨仓核对调整数量
    double YdCheckVolume;
    ///可用数量
    double EnableVolume;
    ///今仓可用数量
    double TodayEnableVolume;
    ///昨仓可用数量
    double YdEnableVolume;
    ///日内初始数量
    int DayTradeInitVolume;
    ///日内可用数量
    int DayTradeAvailVolume;
    ///浮动盈亏
    double DayTradeFloatProfitLoss;
    ///日内持仓成本金额
    double DayTradePositionCost;
    ///日内平仓盈亏
    double DayTradeCloseProfit;
    ///日内累买
    double DayTradeAccumBuy;
    ///日内累卖
    double DayTradeAccumSell;
    ///日内持仓冻结数量
    int DayTradePosFrozen;
      
    ///initialized to zero
    TFComboPositionField(){
        memset(this, 0 , sizeof(TFComboPositionField));
    }
};
    
///账户持仓明细
struct TFAccountPositionDtlField
{
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///组合编号
    int ComboID;
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///持仓多空方向
    char PosiDirection;
    ///上市日
    int OpenDate;
    ///成交编号
    char TradeID[TF_TRADEID_LEN]; 
    ///交易编码
    char TradeCode[TF_TRADECODE_LEN]; 
    ///交易编码类型
    char TradingCodeType;
    ///交易日
    int TradingDay;
    ///成交量
    int Volume;
    ///本次结算价
    double SettlementPrice;
    ///上次结算价
    double PreSettlementPrice;
    ///今开盘
    double OpenPrice;
    ///投资者保证金
    double Margin;
    ///投资者保证金率
    double MarginRate;
    ///平仓量
    double CloseVolume;
    ///平仓金额
    double CloseAmount;
      
    ///initialized to zero
    TFAccountPositionDtlField(){
        memset(this, 0 , sizeof(TFAccountPositionDtlField));
    }
};
    
///费用设置信息
struct TFFeeSetField
{
    ///公司编号
    int CompanyID;
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///证券类别
    char ProductClass;
    ///产品代码
    char ProductID[TF_PRODUCTID_LEN]; 
    ///买卖方向
    char Direction;
    ///开平标志
    char OffsetFlag;
    ///备兑标志
    char CoveredFlag;
    ///投机套保标志
    char HedgeFlag;
    ///费用类别
    char FeeType;
    ///费用按成交金额比例
    double BalanceRatio;
    ///费用按成交面值比例
    double FaceValueRatio;
    ///费用按成交数量比例
    double AmountRatio;
    ///最高收费
    double MaxFee;
    ///最低收费
    double MinFee;
    ///费用计算模式
    char CalculateType;
    ///交易日
    int TradingDay;
      
    ///initialized to zero
    TFFeeSetField(){
        memset(this, 0 , sizeof(TFFeeSetField));
    }
};
    
///保证金率
struct TFMarginRateField
{
    ///交易日
    int TradingDay;
    ///账户编号
    int AccountID;
    ///投资者范围
    char InvestorRange;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///投机套保标志
    char HedgeFlag;
    ///期权类型
    char OptionType;
    ///证券类别
    char ProductClass;
    ///产品代码
    char ProductID[TF_PRODUCTID_LEN]; 
    ///多头保证金率
    double LongMarginRatioByMoney;
    ///多头保证金费
    double LongMarginRatioByVolume;
    ///空头保证金率
    double ShortMarginRatioByMoney;
    ///空头保证金费
    double ShortMarginRatioByVolume;
    ///是否按比例上浮
    int IsFloat;
      
    ///initialized to zero
    TFMarginRateField(){
        memset(this, 0 , sizeof(TFMarginRateField));
    }
};
    
///报单
struct TFOrderField
{
    ///交易日
    int TradingDay;
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
    ///会话编号
    int SessionID;
    ///前置编号
    int FrontID;
    ///报单引用
    char OrderRef[TF_ORDERREF_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///席位号
    char SeatID[TF_SEATID_LEN]; 
    ///本地报单编号
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
    ///买卖方向
    char Direction;
    ///操作员代码
    int OperatorID;
    ///交易编码
    char TradeCode[TF_TRADECODE_LEN]; 
    ///营业部代码
    char BranchID[TF_BRANCHID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///报单价格条件
    char OrderPriceType;
    ///开平标志
    char CombOffsetFlag[TF_COMBOFFSETFLAG_LEN]; 
    ///投机套保标志
    char CombHedgeFlag[TF_COMBHEDGEFLAG_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///价格
    double LimitPrice;
    ///原始数量
    int VolumeTotalOriginal;
    ///有效期类型
    char TimeCondition;
    ///成交量类型
    char VolumeCondition;
    ///最小成交量
    int MinVolume;
    ///触发条件
    char ContingentCondition;
    ///止损价
    double StopPrice;
    ///请求编号
    int ORRequestID;
    ///报单编号
    char OrderSysID[TF_ORDERSYSID_LEN]; 
    ///报单状态
    char OrderStatus;
    ///报单类型
    char OrderType;
    ///今成交数量
    int VolumeTraded;
    ///今成交金额
    double AmountTraded;
    ///剩余数量
    int VolumeRemain;
    ///报单日期
    int InsertDate;
    ///委托时间
    int InsertTime;
    ///最后修改时间
    int UpdateTime;
    ///撤销时间
    int CancelTime;
    ///被撤单引用
    char OrderActionRef[TF_ORDERACTIONREF_LEN]; 
    ///状态信息
    char StatusMsg[TF_STATUSMSG_LEN]; 
    ///发起标志
    char OwnerType;
    ///预留字段1
    char ThirdReff1[TF_THIRDREFF1_LEN]; 
    ///预留字段2
    char ThirdReff2[TF_THIRDREFF2_LEN]; 
    ///撤成\废单数量
    int VolumeCanceled;
    ///备注
    char Remark[TF_REMARK_LEN]; 
    ///撤单标志
    char CancelFlag;
    ///订单IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///订单MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///订单硬盘序列号
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///订单机器码
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///订单操作系统
    char OrderOS[TF_ORDEROS_LEN]; 
    ///当前资金
    double Balance;
    ///手续费
    double Commission;
    ///证券二级类别
    char SubProductClass;
      
    ///initialized to zero
    TFOrderField(){
        memset(this, 0 , sizeof(TFOrderField));
    }
};
    
///成交
struct TFTradeField
{
    ///交易日
    int TradingDay;
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///成交编号
    char TradeID[TF_TRADEID_LEN]; 
    ///买卖方向
    char Direction;
    ///交易编码
    char TradeCode[TF_TRADECODE_LEN]; 
    ///席位号
    char SeatID[TF_SEATID_LEN]; 
    ///营业部代码
    char BranchID[TF_BRANCHID_LEN]; 
    ///证券交易代码
    char InstrumentCode[TF_INSTRUMENTCODE_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///操作员代码
    int OperatorID;
    ///请求编号
    int ORRequestID;
    ///报单编号
    char OrderSysID[TF_ORDERSYSID_LEN]; 
    ///本地报单编号
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
    ///报单引用
    char OrderRef[TF_ORDERREF_LEN]; 
    ///开平标志
    char OffsetFlag;
    ///备兑标志
    char CoveredFlag;
    ///投机套保标志
    char HedgeFlag;
    ///价格
    double Price;
    ///成交量
    int Volume;
    ///成交金额
    double TradeAmount;
    ///交易日
    int TradeDate;
    ///成交时间
    int TradeTime;
    ///手续费
    double Commission;
    ///序号
    int SequenceNo;
    ///发起标志
    char OwnerType;
    ///证券二级类别
    char SubProductClass;
      
    ///initialized to zero
    TFTradeField(){
        memset(this, 0 , sizeof(TFTradeField));
    }
};
    
///风控规则
struct TFRiskRuleField
{
    ///交易日
    int TradingDay;
    ///规则ID
    int RiskId;
    ///规则代码
    char RuleCode[TF_RULECODE_LEN]; 
    ///公司编号
    int CompanyID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码集合
    char InstrumentIDs[TF_INSTRUMENTIDS_LEN]; 
    ///证券控制层级
    char InstrumentControlLevel;
    ///证券范围
    char InstrumentRangeType;
    ///证券联合风控
    bool InstrumentUnionFlag;
    ///账户集合
    char AccountIDs[TF_ACCOUNTIDS_LEN]; 
    ///账户集合控制层级
    char AccountControlLevel;
    ///账户集合范围
    char AccountRangeType;
    ///投资账户联合风控
    bool AccountUnionFlag;
    ///规则名称
    char RuleName[TF_RULENAME_LEN]; 
    ///是否活跃
    int IsActive;
    ///修改内容明细（json字符串）
    char Value[TF_VALUE_LEN]; 
      
    ///initialized to zero
    TFRiskRuleField(){
        memset(this, 0 , sizeof(TFRiskRuleField));
    }
};
    
///触发风控规则日志
struct TFRiskRuleLogField
{
    ///交易日
    int TradingDay;
    ///序号
    int SequenceNo;
    ///公司编号
    int CompanyID;
    ///登录成功时间
    int ExecuteTime;
    ///规则ID
    int RiskId;
    ///规则代码
    char RuleCode[TF_RULECODE_LEN]; 
    ///规则名称
    char RuleName[TF_RULENAME_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码集合
    char InstrumentIDs[TF_INSTRUMENTIDS_LEN]; 
    ///账户编号
    int AccountID;
    ///报单引用
    char OrderRef[TF_ORDERREF_LEN]; 
    ///规则阀值
    double Threshold;
    ///计算指标值
    double CalcValue;
    ///错误信息
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFRiskRuleLogField(){
        memset(this, 0 , sizeof(TFRiskRuleLogField));
    }
};
    
///管理员指令
struct TFAdminCommandField
{
    ///交易日
    int TradingDay;
    ///序号
    int SequenceNo;
    ///操作员代码
    int OperatorID;
    ///指令代码
    char AdminCode[TF_ADMINCODE_LEN]; 
    ///修改内容明细（json字符串）
    char Value[TF_VALUE_LEN]; 
    ///错误代码
    int ErrorID;
    ///错误信息
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFAdminCommandField(){
        memset(this, 0 , sizeof(TFAdminCommandField));
    }
};
    
///指令日志
struct TFOperationLogField
{
    ///交易日
    int TradingDay;
    ///操作员代码
    int OperatorID;
    ///投资者代码
    int InvestorID;
    ///登录成功时间
    int ExecuteTime;
    ///指令代码
    char AdminCode[TF_ADMINCODE_LEN]; 
    ///修改内容明细（json字符串）
    char Value[TF_VALUE_LEN]; 
    ///错误代码
    int ErrorID;
    ///错误信息
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFOperationLogField(){
        memset(this, 0 , sizeof(TFOperationLogField));
    }
};
    
///持仓变动日志
struct TFPosChangeLogField
{
    ///交易日
    int TradingDay;
    ///操作员代码
    int OperatorID;
    ///操作类型
    char OperationType;
    ///变动类型
    char ChangeType;
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///持仓多空方向
    char PosiDirection;
    ///投机套保标志
    char HedgeFlag;
    ///登录成功时间
    int ExecuteTime;
    ///原始值
    double OriginValue;
    ///更新值
    double NewValue;
    ///备注
    char Memo[TF_MEMO_LEN]; 
      
    ///initialized to zero
    TFPosChangeLogField(){
        memset(this, 0 , sizeof(TFPosChangeLogField));
    }
};
    
///资金变动日志
struct TFActChangeLogField
{
    ///交易日
    int TradingDay;
    ///操作员代码
    int OperatorID;
    ///操作类型
    char OperationType;
    ///变动类型
    char ChangeType;
    ///账户编号
    int AccountID;
    ///登录成功时间
    int ExecuteTime;
    ///原始值
    double OriginValue;
    ///更新值
    double NewValue;
    ///备注
    char Memo[TF_MEMO_LEN]; 
      
    ///initialized to zero
    TFActChangeLogField(){
        memset(this, 0 , sizeof(TFActChangeLogField));
    }
};
    
///返回信息
struct TFRspInfoField
{
    ///错误代码
    int ErrorID;
    ///结束标志
    int IsLast;
    ///错误信息
    char ErrorMsg[TF_ERRORMSG_LEN]; 
      
    ///initialized to zero
    TFRspInfoField(){
        memset(this, 0 , sizeof(TFRspInfoField));
    }
};
    
///登录请求
struct TFUserLoginReqField
{
    ///操作员代码
    int OperatorID;
    ///密码
    char Password[TF_PASSWORD_LEN]; 
    ///客户端特征码
    char FeatureToken[TF_FEATURETOKEN_LEN]; 
      
    ///initialized to zero
    TFUserLoginReqField(){
        memset(this, 0 , sizeof(TFUserLoginReqField));
    }
};
    
///登录请求
struct TFLoginReqField
{
    ///操作员代码
    int OperatorID;
    ///密码
    char Password[TF_PASSWORD_LEN]; 
    ///订单IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///订单MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///订单硬盘序列号
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///订单机器码
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///订单操作系统
    char OrderOS[TF_ORDEROS_LEN]; 
    ///客户端特征码
    char FeatureToken[TF_FEATURETOKEN_LEN]; 
      
    ///initialized to zero
    TFLoginReqField(){
        memset(this, 0 , sizeof(TFLoginReqField));
    }
};
    
///注销请求
struct TFLogoutReqField
{
    ///操作员代码
    int OperatorID;
      
    ///initialized to zero
    TFLogoutReqField(){
        memset(this, 0 , sizeof(TFLogoutReqField));
    }
};
    
///登入请求响应
struct TFRspLoginField
{
    ///交易日
    int TradingDay;
    ///登录成功时间
    int LoginTime;
    ///操作员代码
    int OperatorID;
    ///前置编号
    int FrontID;
    ///会话编号
    int SessionID;
    ///最大报单引用
    int MaxOrderRef;
      
    ///initialized to zero
    TFRspLoginField(){
        memset(this, 0 , sizeof(TFRspLoginField));
    }
};
    
///报单录入请求
struct TFOrderReqField
{
    ///账户编号
    int AccountID;
    ///操作员代码
    int OperatorID;
    ///组合编号
    int ComboID;
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///报单引用
    char OrderRef[TF_ORDERREF_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///报单价格条件
    char OrderPriceType;
    ///买卖方向
    char Direction;
    ///开平标志
    char CombOffsetFlag[TF_COMBOFFSETFLAG_LEN]; 
    ///投机套保标志
    char CombHedgeFlag[TF_COMBHEDGEFLAG_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///价格
    double LimitPrice;
    ///原始数量
    int VolumeTotalOriginal;
    ///有效期类型
    char TimeCondition;
    ///成交量类型
    char VolumeCondition;
    ///预留字段1
    char ThirdReff1[TF_THIRDREFF1_LEN]; 
    ///预留字段2
    char ThirdReff2[TF_THIRDREFF2_LEN]; 
    ///订单IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///订单MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///订单硬盘序列号
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///订单机器码
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///订单操作系统
    char OrderOS[TF_ORDEROS_LEN]; 
      
    ///initialized to zero
    TFOrderReqField(){
        memset(this, 0 , sizeof(TFOrderReqField));
    }
};
    
///取消报单请求
struct TFOrderCancelReqField
{
    ///账户编号
    int AccountID;
    ///操作员代码
    int OperatorID;
    ///组合编号
    int ComboID;
    ///被撤单引用
    char OrderActionRef[TF_ORDERACTIONREF_LEN]; 
    ///本地报单编号
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
    ///订单IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///订单MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///订单硬盘序列号
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///订单机器码
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///订单操作系统
    char OrderOS[TF_ORDEROS_LEN]; 
      
    ///initialized to zero
    TFOrderCancelReqField(){
        memset(this, 0 , sizeof(TFOrderCancelReqField));
    }
};
    
///查询风控请求
struct TFQryRiskRuleField
{
    ///规则ID
    int RiskId;
    ///规则代码
    char RuleCode[TF_RULECODE_LEN]; 
      
    ///initialized to zero
    TFQryRiskRuleField(){
        memset(this, 0 , sizeof(TFQryRiskRuleField));
    }
};
    
///查询产品信息
struct TFQryInstrumentField
{
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
      
    ///initialized to zero
    TFQryInstrumentField(){
        memset(this, 0 , sizeof(TFQryInstrumentField));
    }
};
    
///查询产品手续费信息
struct TFQryCommissionRateField
{
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///买卖方向
    char Direction;
    ///开平标志
    char OffsetFlag;
    ///备兑标志
    char CoveredFlag;
    ///投机套保标志
    char HedgeFlag;
      
    ///initialized to zero
    TFQryCommissionRateField(){
        memset(this, 0 , sizeof(TFQryCommissionRateField));
    }
};
    
///查询产品保证金率信息
struct TFQryMarginRateField
{
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///备兑标志
    char CoveredFlag;
    ///投机套保标志
    char HedgeFlag;
      
    ///initialized to zero
    TFQryMarginRateField(){
        memset(this, 0 , sizeof(TFQryMarginRateField));
    }
};
    
///查询报单
struct TFQryOrderField
{
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///本地报单编号
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
      
    ///initialized to zero
    TFQryOrderField(){
        memset(this, 0 , sizeof(TFQryOrderField));
    }
};
    
///查询成交
struct TFQryTradeField
{
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///成交编号
    char TradeID[TF_TRADEID_LEN]; 
    ///本地报单编号
    char OrderLocalID[TF_ORDERLOCALID_LEN]; 
      
    ///initialized to zero
    TFQryTradeField(){
        memset(this, 0 , sizeof(TFQryTradeField));
    }
};
    
///查询账户资金
struct TFQryAccountAssetField
{
    ///账户编号
    int AccountID;
      
    ///initialized to zero
    TFQryAccountAssetField(){
        memset(this, 0 , sizeof(TFQryAccountAssetField));
    }
};
    
///查询账户基础信息
struct TFQryAccountField
{
    ///账户编号
    int AccountID;
    ///查询账户类型
    char QryAccountType;
      
    ///initialized to zero
    TFQryAccountField(){
        memset(this, 0 , sizeof(TFQryAccountField));
    }
};
    
///查询投资者持仓
struct TFQryPositionField
{
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
      
    ///initialized to zero
    TFQryPositionField(){
        memset(this, 0 , sizeof(TFQryPositionField));
    }
};
    
///查询投资组合
struct TFQryComboField
{
    ///账户编号
    int AccountID;
    ///组合编号
    int ComboID;
      
    ///initialized to zero
    TFQryComboField(){
        memset(this, 0 , sizeof(TFQryComboField));
    }
};
    
///终端特征码
struct TFTerminalFeatureCodeField
{
    ///终端版本号
    char TerminalVeresion[TF_TERMINALVERESION_LEN]; 
    ///终端特征码
    char FeatureCode[TF_FEATURECODE_LEN]; 
    ///公司编号
    int CompanyID;
    ///终端名字
    char ProgramName[TF_PROGRAMNAME_LEN]; 
      
    ///initialized to zero
    TFTerminalFeatureCodeField(){
        memset(this, 0 , sizeof(TFTerminalFeatureCodeField));
    }
};
    
///系统级别参数表
struct TFSystemConfigField
{
    ///参数标识
    char SystemConfigKey[TF_SYSTEMCONFIGKEY_LEN]; 
    ///参数项名称
    char SystemConfigName[TF_SYSTEMCONFIGNAME_LEN]; 
    ///参数类型
    char SystemConfigType[TF_SYSTEMCONFIGTYPE_LEN]; 
    ///参数值
    char SystemConfigValue[TF_SYSTEMCONFIGVALUE_LEN]; 
    ///显示顺序
    int SystemConfigOrder;
      
    ///initialized to zero
    TFSystemConfigField(){
        memset(this, 0 , sizeof(TFSystemConfigField));
    }
};
    
///交易日里
struct TFTradeCalendarField
{
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///交易日
    int TradeDate;
    ///上一交易日
    int LastTradeDate;
      
    ///initialized to zero
    TFTradeCalendarField(){
        memset(this, 0 , sizeof(TFTradeCalendarField));
    }
};
    
///申购新股基础数据
struct TFIpoInstrumentField
{
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///合约名称
    char InstrumentName[TF_INSTRUMENTNAME_LEN]; 
    ///发行价格
    double IpoPrice;
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
    ///发行数量
    int IssueVolume;
    ///最小成交量
    int MinVolume;
    ///最大申购数量
    int MaxVolume;
    ///申购日
    int SubDate;
    ///申购资金验资日
    int FundVerificationDate;
    ///网上申购缴款日
    int PaymentDate;
    ///证券类别
    char ProductClass;
    ///证券二级类别
    char SubProductClass;
      
    ///initialized to zero
    TFIpoInstrumentField(){
        memset(this, 0 , sizeof(TFIpoInstrumentField));
    }
};
    
///账户申购额度信息
struct TFIpoLimitField
{
    ///账户编号
    int AccountID;
    ///投资者代码
    int InvestorID;
    ///资金账户代码
    char AccountCode[TF_ACCOUNTCODE_LEN]; 
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///申购额度
    int LimitVolume;
    ///科创版申购额度
    int LimitKC;
      
    ///initialized to zero
    TFIpoLimitField(){
        memset(this, 0 , sizeof(TFIpoLimitField));
    }
};
    
///查询新股申购产品信息
struct TFQryIpoInstrumentField
{
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
    ///证券代码
    char InstrumentID[TF_INSTRUMENTID_LEN]; 
      
    ///initialized to zero
    TFQryIpoInstrumentField(){
        memset(this, 0 , sizeof(TFQryIpoInstrumentField));
    }
};
    
///查询新股申购额度信息
struct TFQryIpoLimitField
{
    ///账户编号
    int AccountID;
    ///交易所代码
    char ExchangeID[TF_EXCHANGEID_LEN]; 
      
    ///initialized to zero
    TFQryIpoLimitField(){
        memset(this, 0 , sizeof(TFQryIpoLimitField));
    }
};
    
///操作员登录日志
struct TFLoginLogField
{
    ///交易日
    int TradingDay;
    ///操作员代码
    int OperatorID;
    ///会话编号
    int SessionID;
    ///登录/登出
    char LoginType;
    ///登入方式
    char LoginFrom;
    ///订单IP
    char OrderIP[TF_ORDERIP_LEN]; 
    ///订单MAC
    char OrderMAC[TF_ORDERMAC_LEN]; 
    ///订单硬盘序列号
    char OrderHDNum[TF_ORDERHDNUM_LEN]; 
    ///订单机器码
    char OrderMacCode[TF_ORDERMACCODE_LEN]; 
    ///订单操作系统
    char OrderOS[TF_ORDEROS_LEN]; 
    ///客户端特征码
    char FeatureToken[TF_FEATURETOKEN_LEN]; 
    ///文件生成时间
    int CreateTime;
      
    ///initialized to zero
    TFLoginLogField(){
        memset(this, 0 , sizeof(TFLoginLogField));
    }
};
    
}}
#endif
  