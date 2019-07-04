
#pragma once

#ifndef TF_DATA_TYPE_H
#define TF_DATA_TYPE_H

namespace tfzq{ namespace stp{

enum TF_RESUME_TYPE
{
	TF_TERT_RESTART = 0,
	TF_TERT_RESUME,
	TF_TERT_QUICK
};

    
      
/////////////////////////////////////////////////////////////////////////
///ProductClassType是一个证券类别类型
/////////////////////////////////////////////////////////////////////////
///期货
const char TF_PC_Futures = '1'; 
///期权
const char TF_PC_Options = '2'; 
///股票
const char TF_PC_Stock = '3'; 
///债券
const char TF_PC_Bond = '4'; 
///基金
const char TF_PC_Fund = '5'; 
///指数
const char TF_PC_Index = '6'; 
///权证
const char TF_PC_Warrant = '7'; 
///回购
const char TF_PC_Repo = '8'; 
///其他
const char TF_PC_Other = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///InvestorRangeType是一个投资者范围类型
/////////////////////////////////////////////////////////////////////////
///所有
const char TF_IR_All = '1'; 
///投资者组
const char TF_IR_Group = '2'; 
///单一投资者
const char TF_IR_Single = '3'; 
///所有投资单元
const char TF_IR_AllInvestUnit = '4'; 
///单一投资单元
const char TF_IR_SingleInvestUnit = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///ProviderTypeType是一个柜台类型类型
/////////////////////////////////////////////////////////////////////////
///ctp期货交易
const char TF_PT_CtpFutureTd = '0'; 
///ctp期货行情
const char TF_PT_CtpFutureMd = '1'; 
///ctp期货查询
const char TF_PT_CtpFutureQry = '2'; 
///Stp的期权交易
const char TF_PT_STPOptionTd = '3'; 
///Stp的期权查询
const char TF_PT_STPOptionQry = '4'; 
///Stp的股票交易
const char TF_PT_STPStockTd = '5'; 
///Stp的股票查询
const char TF_PT_STPStockQry = '6'; 
///Femas期货交易
const char TF_PT_FemasFutureTd = '7'; 
///Femas期货行情
const char TF_PT_FemasFutureMd = '8'; 
///Femas期货查询
const char TF_PT_FemasFutureQry = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///DirectionType是一个买卖方向类型
/////////////////////////////////////////////////////////////////////////
///买
const char TF_D_Buy = '0'; 
///卖
const char TF_D_Sell = '1'; 
///ETF申购
const char TF_D_ETFPur = '2'; 
///ETF赎回
const char TF_D_ETFRed = '3'; 
///现金替代，只用作回报
const char TF_D_CashIn = '4'; 
///债券入库
const char TF_D_PledgeBondIn = '5'; 
///债券出库
const char TF_D_PledgeBondOut = '6'; 
///配股
const char TF_D_Doublened = '7'; 
///转托管
const char TF_D_DepositoryTransfer = '8'; 
///信用账户配股
const char TF_D_CreditDoublened = '9'; 
///担保品买入
const char TF_D_BuyCollateral = 'A'; 
///担保品卖出
const char TF_D_SellCollateral = 'B'; 
///担保品转入
const char TF_D_CollateralTransferIn = 'C'; 
///担保品转出
const char TF_D_CollateralTransferOut = 'D'; 
///融资买入
const char TF_D_MarginTrade = 'E'; 
///融券卖出
const char TF_D_ShortSell = 'F'; 
///卖券还款
const char TF_D_RepayMargin = 'G'; 
///买券还券
const char TF_D_RepayStock = 'H'; 
///直接还款
const char TF_D_DirectRepayMargin = 'I'; 
///直接还券
const char TF_D_DirectRepayStock = 'J'; 
///余券划转
const char TF_D_ExcessStockTransfer = 'K'; 
///OF申购
const char TF_D_OFPur = 'L'; 
///OF赎回
const char TF_D_OFRed = 'M'; 
///SF拆分
const char TF_D_SFSplit = 'N'; 
///SF合并
const char TF_D_SFMerge = 'O'; 
///备兑
const char TF_D_Covered = 'P'; 
///证券冻结(开)/解冻(平)
const char TF_D_Freeze = 'Q'; 
///行权
const char TF_D_Execute = 'R'; 
///CB回售
const char TF_D_CBRed = 'S'; 
///CB转股
const char TF_D_CBConv = 'T'; 
///OF认购
const char TF_D_OFSub = 'U'; 
      
/////////////////////////////////////////////////////////////////////////
///QryAccountTypeType是一个查询账户类型类型
/////////////////////////////////////////////////////////////////////////
///操作
const char TF_QAT_Operate = '0'; 
///查询
const char TF_QAT_Query = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///HedgeFlagType是一个投机套保标志类型
/////////////////////////////////////////////////////////////////////////
///投机
const char TF_HF_Speculation = '1'; 
///套利
const char TF_HF_Arbitrage = '2'; 
///套保
const char TF_HF_Hedge = '3'; 
///做市商
const char TF_HF_MarketMaker = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///UserTypeType是一个用户类型类型
/////////////////////////////////////////////////////////////////////////
///投资者
const char TF_UT_Investor = '0'; 
///操作员
const char TF_UT_Operator = '1'; 
///管理员
const char TF_UT_SuperUser = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///CoveredFlagType是一个备兑标志类型
/////////////////////////////////////////////////////////////////////////
///非备兑
const char TF_CF_Uncovered = '\0'; 
///备兑
const char TF_CF_Covered = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///OwnerTypeType是一个发起标志类型
/////////////////////////////////////////////////////////////////////////
///个人投资者
const char TF_OT_0 = '0'; 
///交易所发起
const char TF_OT_1 = '1'; 
///期权经营机构
const char TF_OT_2 = '2'; 
///机构投资者发起
const char TF_OT_3 = '3'; 
///自营交易发起
const char TF_OT_4 = '4'; 
///流动性服务提供商发起
const char TF_OT_5 = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///InvestorLevelType是一个投资者交易等级类型
/////////////////////////////////////////////////////////////////////////
///一级
const char TF_IL_1 = '0'; 
///二级
const char TF_IL_2 = '1'; 
///三级
const char TF_IL_3 = '2'; 
///非交易级别，此级别investor不可交易
const char TF_IL_9 = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///OffsetFlagType是一个开平标志类型
/////////////////////////////////////////////////////////////////////////
///开仓
const char TF_OF_Open = '0'; 
///平仓
const char TF_OF_Close = '1'; 
///强平
const char TF_OF_ForceClose = '2'; 
///平今
const char TF_OF_CloseToday = '3'; 
///平昨
const char TF_OF_CloseYesterday = '4'; 
///强减
const char TF_OF_ForceOff = '5'; 
///本地强平
const char TF_OF_LocalForceClose = '6'; 
///自动进行平昨平今判断(暂不支持）
const char TF_OF_Auto = '7'; 
///认购
const char TF_OF_Call = '8'; 
///认沽
const char TF_OF_Put = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///OrderPriceTypeType是一个报单价格条件类型
/////////////////////////////////////////////////////////////////////////
///任意价
const char TF_OPT_AnyPrice = '1'; 
///限价
const char TF_OPT_LimitPrice = '2'; 
///最优价
const char TF_OPT_BestPrice = '3'; 
///最新价
const char TF_OPT_LastPrice = '4'; 
///本方最新价
const char TF_OPT_LocalBestPrice = '5'; 
///五档最优价
const char TF_OPT_FiveLevelPrice = '6'; 
///ETF申购
const char TF_OPT_PurchasesETF  = 'd'; 
///ETF赎回
const char TF_OPT_RedeemETF = 'e'; 
      
/////////////////////////////////////////////////////////////////////////
///TimeConditionType是一个有效期类型类型
/////////////////////////////////////////////////////////////////////////
///立即完成，否则撤销
const char TF_TC_IOC = '1'; 
///本节有效
const char TF_TC_GFS = '2'; 
///当日有效
const char TF_TC_GFD = '3'; 
///指定日期前有效
const char TF_TC_GTD = '4'; 
///撤销前有效
const char TF_TC_GTC = '5'; 
///集合竞价有效
const char TF_TC_GFA = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///VolumeConditionType是一个成交量类型类型
/////////////////////////////////////////////////////////////////////////
///任何数量
const char TF_VC_AV = '1'; 
///最小数量
const char TF_VC_MV = '2'; 
///全部数量
const char TF_VC_CV = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///ContingentConditionType是一个触发条件类型
/////////////////////////////////////////////////////////////////////////
///立即
const char TF_CC_Immediately = '1'; 
///止损
const char TF_CC_Touch = '2'; 
///止赢
const char TF_CC_TouchProfit = '3'; 
///预埋单
const char TF_CC_ParkedOrder = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///OrderStatusType是一个报单状态类型
/////////////////////////////////////////////////////////////////////////
///待报
const char TF_OST_Unknown = '0'; 
///正报
const char TF_OST_PendingNew = '1'; 
///已报
const char TF_OST_New = '2'; 
///部成
const char TF_OST_PartilyFilled = '3'; 
///已成
const char TF_OST_Filled = '4'; 
///部撤
const char TF_OST_PartilyCanceled = '5'; 
///已撤
const char TF_OST_Canceled = '6'; 
///废单
const char TF_OST_Rejected = '7'; 
      
/////////////////////////////////////////////////////////////////////////
///OrderTypeType是一个报单类型类型
/////////////////////////////////////////////////////////////////////////
///正常
const char TF_ORDT_Normal = '0'; 
///报价衍生
const char TF_ORDT_DeriveFromQuote = '1'; 
///组合衍生
const char TF_ORDT_DeriveFromCombination = '2'; 
///组合报单
const char TF_ORDT_Combination = '3'; 
///条件单
const char TF_ORDT_ConditionalOrder = '4'; 
///互换单
const char TF_ORDT_Swap = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///PosiDirectionType是一个持仓多空方向类型
/////////////////////////////////////////////////////////////////////////
///空头
const char TF_PD_Short = '1'; 
///多头
const char TF_PD_Long = '0'; 
      
/////////////////////////////////////////////////////////////////////////
///ChangeTypeType是一个变动类型类型
/////////////////////////////////////////////////////////////////////////
///核对值
const char TF_CGT_check = '1'; 
///冻结功能
const char TF_CGT_fronzen = '2'; 
///当前值
const char TF_CGT_current = '3'; 
///持仓成本
const char TF_CGT_cost = '4'; 
///保证金占用
const char TF_CGT_useMargin = '5'; 
///今核对值
const char TF_CGT_Todaycheck = '6'; 
///昨核对值
const char TF_CGT_Ydcheck = '7'; 
///今当前值
const char TF_CGT_Todaycurrent = '8'; 
///昨当前值
const char TF_CGT_Ydcurrent = '9'; 
      
/////////////////////////////////////////////////////////////////////////
///CapitalDirectionType是一个资金变化方向类型
/////////////////////////////////////////////////////////////////////////
///不变
const char TF_CPD_Nochange = '0'; 
///增加
const char TF_CPD_Increase = '1'; 
///减少
const char TF_CPD_Decrease = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionDirectionType是一个持仓变化方向类型
/////////////////////////////////////////////////////////////////////////
///不变
const char TF_PSD_Nochange = '0'; 
///增加
const char TF_PSD_Increase = '1'; 
///减少
const char TF_PSD_Decrease = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionDateType是一个持仓日期标志类型
/////////////////////////////////////////////////////////////////////////
///今日持仓
const char TF_PSD_Today = '1'; 
///历史持仓
const char TF_PSD_History = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///TradingPhaseType是一个交易阶段类型
/////////////////////////////////////////////////////////////////////////
///非交易时段
const char TF_TP_NonTrade = '0'; 
///集合竞价时段
const char TF_TP_Bidding = '1'; 
///连续交易时段
const char TF_TP_Continuous = '2'; 
///停牌时段
const char TF_TP_Suspension = '3'; 
///熔断时段
const char TF_TP_Fuse = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///OpenRestrictionType是一个开仓限制类型
/////////////////////////////////////////////////////////////////////////
///无开仓限制
const char TF_OR_None = '0'; 
///限制备兑开仓
const char TF_OR_NoCoverOpen = '1'; 
///限制卖出开仓
const char TF_OR_NoSellOpen = '2'; 
///限制卖出开仓、备兑开仓
const char TF_OR_NoSellAndCoverOpen = '3'; 
///限制买入开仓
const char TF_OR_NoBuyOpen = '4'; 
///限制买入开仓、备兑开仓
const char TF_OR_NoBuyAndCoverOpen = '5'; 
///限制买入开仓、卖出开仓
const char TF_OR_NoBuyAndSellOpen = '6'; 
///限制买入开仓、卖出开仓、备兑开仓
const char TF_OR_NoBuySellAndCoverOpen = '7'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionTypeType是一个持仓类型类型
/////////////////////////////////////////////////////////////////////////
///净持仓
const char TF_PT_Net = '1'; 
///综合持仓
const char TF_PT_Gross = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///PositionDateTypeType是一个持仓日期类型类型
/////////////////////////////////////////////////////////////////////////
///使用历史持仓
const char TF__UseHistory = '1'; 
///不使用历史持仓
const char TF__NoUseHistory = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///InvestorTypeType是一个投资者类型类型
/////////////////////////////////////////////////////////////////////////
///自然人
const char TF_IT_Person = '1'; 
///法人
const char TF_IT_Company = '2'; 
///投资基金
const char TF_IT_Fund = '3'; 
///特殊法人
const char TF_IT_SpecialOrgan = '4'; 
///资管户
const char TF_IT_Asset = '5'; 
///系统管理员
const char TF_IT_Admin = 'a'; 
      
/////////////////////////////////////////////////////////////////////////
///IDCardTypeType是一个证件类型类型
/////////////////////////////////////////////////////////////////////////
///组织机构代码
const char TF_DCT_EID = '0'; 
///中国公民身份证
const char TF_DCT_IDCard = '1'; 
///军官证
const char TF_DCT_OfficerIDCard = '2'; 
///警官证
const char TF_DCT_PoliceIDCard = '3'; 
///士兵证
const char TF_DCT_SoldierIDCard = '4'; 
///户口簿
const char TF_DCT_HouseholdRegister  = '5'; 
///护照
const char TF_DCT_Passport = '6'; 
///台胞证
const char TF_DCT_TaiwanCompatriotIDCard  = '7'; 
///回乡证
const char TF_DCT_HomeComingCard = '8'; 
///营业执照号
const char TF_DCT_LicenseNo = '9'; 
///税务登记号/当地纳税ID
const char TF_DCT_TaxNo = 'A'; 
///港澳居民来往内地通行证
const char TF_DCT_HMMainlandTravelPermit  = 'B'; 
///台湾居民来往大陆通行证
const char TF_DCT_TwMainlandTravelPermit = 'C'; 
///驾照
const char TF_DCT_DrivingLicense = 'D'; 
///当地社保ID
const char TF_DCT_SocialID = 'F'; 
///当地身份证
const char TF_DCT_LocalID = 'G'; 
///商业登记证
const char TF_DCT_BusinessRegistration  = 'H'; 
///港澳永久性居民身份证
const char TF_DCT_HKMCIDCard  = 'I'; 
///人行开户许可证
const char TF_DCT_AccountsPermits = 'J'; 
///外国人永久居留证
const char TF_DCT_PermanantResidence = 'K'; 
///资管产品备案函
const char TF_DCT_AssetProductRecord = 'L'; 
///其他证件
const char TF_DCT_OtherCard = 'x'; 
      
/////////////////////////////////////////////////////////////////////////
///TradingCodeTypeType是一个交易编码类型类型
/////////////////////////////////////////////////////////////////////////
///投机
const char TF_TC_Speculation = '1'; 
///套利
const char TF_TC_Arbitrage = '2'; 
///套保
const char TF_TC_Hedge = '3'; 
///做市商
const char TF_TC_MarketMaker = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///OptCommissionTypeType是一个期权费用类型类型
/////////////////////////////////////////////////////////////////////////
///行权费
const char TF_OPT_CT_StrikeFee = '1'; 
///被行权费
const char TF_OPT_CT_BeStrikeDFee = '2'; 
///行权过户费
const char TF_OPT_CT_TransferFee = '3'; 
///经手费
const char TF_OPT_CT_Brokerage = '4'; 
///交易费
const char TF_OPT_CT_TradeFee = '5'; 
///结算费
const char TF_OPT_CT_SettleFee = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///CommDirectionType是一个委托方向类型
/////////////////////////////////////////////////////////////////////////
///买开
const char TF_CD_BuyOpen = '1'; 
///买平
const char TF_CD_BuyClose = '2'; 
///卖开
const char TF_CD_SellOpen = '3'; 
///卖平
const char TF_CD_SellClose = '4'; 
///行权认购
const char TF_CD_CallStrike = '5'; 
///行权认沽
const char TF_CD_PutStrike = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///RateTypeType是一个计算方式类型
/////////////////////////////////////////////////////////////////////////
///按手数
const char TF_RT_ByVolume = '1'; 
///按金额
const char TF_RT_ByMoney = '2'; 
///按面值
const char TF_RT_ByFace = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///OperationTypeType是一个操作类型类型
/////////////////////////////////////////////////////////////////////////
///日初同步操作
const char TF_OPNT_Sync = '1'; 
///管理指令操作
const char TF_OPNT_Admin = '2'; 
///结算后持仓调整操作
const char TF_OPNT_Settle = '3'; 
///持仓占用保证金
const char TF_OPNT_Margin = '4'; 
///其他操作
const char TF_OPNT_Other = '0'; 
      
/////////////////////////////////////////////////////////////////////////
///OptionTypeType是一个期权类型类型
/////////////////////////////////////////////////////////////////////////
///认购
const char TF_OPT_TY_Call = 'C'; 
///认沽
const char TF_OPT_TY_Put = 'P'; 
      
/////////////////////////////////////////////////////////////////////////
///SystemStatusType是一个系统状态类型
/////////////////////////////////////////////////////////////////////////
///导入数据完成
const char TF_STS_SyncDone = '1'; 
///盘中交易状态
const char TF_STS_Trading = '2'; 
///收市完成
const char TF_STS_Closed = '3'; 
///结算完成
const char TF_STS_Settled = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///InstrumentRangeType是一个合约范围类型
/////////////////////////////////////////////////////////////////////////
///所有
const char TF_INSTR_ALL = '1'; 
///证券类别
const char TF_INSTR_PRODUCT_CLASS = '2'; 
///单一合约
const char TF_INSTR_SINGLE = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///SeatTypeType是一个席位类型类型
/////////////////////////////////////////////////////////////////////////
///上交所期权
const char TF_ST_SHOPT = '1'; 
///上交所股票
const char TF_ST_SHSTK = '2'; 
///深交所期权
const char TF_ST_SZOPT = '3'; 
///深交所股票
const char TF_ST_SZSTK = '4'; 
///飞马
const char TF_ST_FEMAS = '5'; 
      
/////////////////////////////////////////////////////////////////////////
///ResumeTypeType是一个私有流重传方式类型
/////////////////////////////////////////////////////////////////////////
///重传
const char TF_RT_Restart = '0'; 
///续传
const char TF_RT_Resume = '1'; 
///当前开始
const char TF_RT_Quick = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///CompanyTypeType是一个公司类型类型
/////////////////////////////////////////////////////////////////////////
///内部机构
const char TF_CT_INSIDE = '1'; 
///机构客户
const char TF_CT_ORGAN = '2'; 
///个人客户
const char TF_CT_USER = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///EnbFlagType是一个状态标志类型
/////////////////////////////////////////////////////////////////////////
///正常
const char TF_EF_NORMAL = 'N'; 
///被关闭
const char TF_EF_OFF = 'C'; 
///锁定
const char TF_EF_LOCK = 'L'; 
///新增未同步
const char TF_EF_UNSYNC = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///ActionTypeType是一个功能类型类型
/////////////////////////////////////////////////////////////////////////
///客户端
const char TF_ACT_CLIENT = '1'; 
///web端
const char TF_ACT_WEB = '2'; 
///行情平台
const char TF_ACT_MARKET = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///AuthTypeType是一个权限类型类型
/////////////////////////////////////////////////////////////////////////
///通用
const char TF_AUT_GENERAL = '0'; 
///券商内部
const char TF_AUT_INSIDE = '1'; 
///外部客户
const char TF_AUT_OUTSIDE = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///FileFlagType是一个请求执行状态类型
/////////////////////////////////////////////////////////////////////////
///处理中
const char TF__InProgress = 'I'; 
///生成成功
const char TF__Success = 'S'; 
///生成失败
const char TF__Fail = 'F'; 
      
/////////////////////////////////////////////////////////////////////////
///MarketDataTypeType是一个行情配置类型类型
/////////////////////////////////////////////////////////////////////////
///实时行情
const char TF_MDT_REAL = '0'; 
///历史行情
const char TF_MDT_HIS = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///PaySubjectType是一个缴费科目类型
/////////////////////////////////////////////////////////////////////////
///通用费用
const char TF_PSJ_GENERAL = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///AccountTypeType是一个账户类型类型
/////////////////////////////////////////////////////////////////////////
///普通证券账户
const char TF_AT_STOCK = '1'; 
///信用账户
const char TF_AT_CREDIT = '2'; 
///衍生品账户
const char TF_AT_DERIVATIVE = '3'; 
///期货账户
const char TF_AT_FUTURES = '4'; 
      
/////////////////////////////////////////////////////////////////////////
///ChannelTypeType是一个通道类型类型
/////////////////////////////////////////////////////////////////////////
///UFT分仓
const char TF_CHT_UFT = '1'; 
///CTP分仓
const char TF_CHT_CTP = '2'; 
///飞马分仓
const char TF_CHT_FEMAS = '3'; 
///O32分仓
const char TF_CHT_O32 = '4'; 
///模拟交易所
const char TF_CHT_SIMULATE = '5'; 
///UF20分仓
const char TF_CHT_UF20 = '6'; 
      
/////////////////////////////////////////////////////////////////////////
///FeeTypeType是一个费用类别类型
/////////////////////////////////////////////////////////////////////////
///交易费
const char TF_FT_TRADEFEE = '1'; 
///印花税
const char TF_FT_STAMPTAX = '2'; 
///过户费
const char TF_FT_TRANSFERFEE = '3'; 
///佣金
const char TF_FT_BROKERFEE = '4'; 
///经手费
const char TF_FT_HANDLINGFEE = '5'; 
///证管费
const char TF_FT_ADMINFEE = '6'; 
///其它费
const char TF_FT_OTHERFEE = '7'; 
///结算费
const char TF_FT_CLEARINGFEE = 'a'; 
///交割费
const char TF_FT_SETTLEFEE = 'b'; 
///委托申报费
const char TF_FT_PERORDER = 'c'; 
///撤单申报费
const char TF_FT_PERCANCEL = 'd'; 
      
/////////////////////////////////////////////////////////////////////////
///CalculateTypeType是一个费用计算模式类型
/////////////////////////////////////////////////////////////////////////
///分笔
const char TF_CT_TOTAL = '1'; 
///合笔
const char TF_CT_PER = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///CancelFlagType是一个撤单标志类型
/////////////////////////////////////////////////////////////////////////
///普通委托
const char TF_CF_ORDER = '1'; 
///撤单委托
const char TF_CF_CANCEL = '2'; 
      
/////////////////////////////////////////////////////////////////////////
///StockRealBackType是一个回报证券标志类型
/////////////////////////////////////////////////////////////////////////
///买入证券当天不可用
const char TF_SRB_FALSE = '0'; 
///买入证当天可用
const char TF_SRB_TRUE = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///FundRealBackType是一个回报资金标志类型
/////////////////////////////////////////////////////////////////////////
///卖出资金不可用
const char TF_FRB_FALSE = '0'; 
///卖出资金当天可用
const char TF_FRB_TRUE = '1'; 
      
/////////////////////////////////////////////////////////////////////////
///InstrumentControlLevelType是一个证券控制层级类型
/////////////////////////////////////////////////////////////////////////
///证券类别
const char TF_INSTC_LEVEL_PRODUCT_CLASS = '1'; 
///单一证券
const char TF_INSTC_LEVEL_SINGLE = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///InstrumentRangeTypeType是一个证券范围类型
/////////////////////////////////////////////////////////////////////////
///所有
const char TF_INSTC_RANGE_ALL = '1'; 
///集合
const char TF_INSTC_RANGE_SET = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///AccountControlLevelType是一个账户集合控制层级类型
/////////////////////////////////////////////////////////////////////////
///公司
const char TF_AR_LEVEL_COMPANY = '1'; 
///账户
const char TF_AR_LEVEL_ACCOUNT = '2'; 
///组合
const char TF_AR_LEVEL_COMBO = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///AccountRangeTypeType是一个账户集合范围类型
/////////////////////////////////////////////////////////////////////////
///所有
const char TF_AR_RANGE_ALL = '1'; 
///集合
const char TF_AR_RANGE_SET = '3'; 
      
/////////////////////////////////////////////////////////////////////////
///UnderlyingTypeType是一个期权执行方式类型
/////////////////////////////////////////////////////////////////////////
///欧式
const char TF_UNDER_EURO = 'E'; 
///美式
const char TF_UNDER_AMER = 'A'; 

/////////////////////////////////////////////////////////////////////////
///常量定义
/////////////////////////////////////////////////////////////////////////

    
///证券代码长度的定义
const int TF_INSTRUMENTID_LEN = (30 + 1); 
///交易所代码长度的定义
const int TF_EXCHANGEID_LEN = (8 + 1); 
///合约名称长度的定义
const int TF_INSTRUMENTNAME_LEN = (20 + 1); 
///产品代码长度的定义
const int TF_PRODUCTID_LEN = (30 + 1); 
///经纪公司代码长度的定义
const int TF_BROKERID_LEN = (10 + 1); 
///柜台代码长度的定义
const int TF_PROVIDERID_LEN = (10 + 1); 
///母账户代码长度的定义
const int TF_BROKERINVESTORID_LEN = (32 + 1); 
///母账户名称长度的定义
const int TF_BROKERINVESTORNAME_LEN = (80 + 1); 
///密码长度的定义
const int TF_PASSWORD_LEN = (40 + 1); 
///期权子账户编码长度的定义
const int TF_OPTSUBINVESTORID_LEN = (8 + 1); 
///席位号长度的定义
const int TF_BUSINESSUNIT_LEN = (5 + 1); 
///营业部代码长度的定义
const int TF_BRANCHID_LEN = (5 + 1); 
///投资者名称长度的定义
const int TF_INVESTORNAME_LEN = (80 + 1); 
///用户代码长度的定义
const int TF_USERID_LEN = (14 + 1); 
///网关登录用户代码长度的定义
const int TF_GATEWAYUSERID_LEN = (14 + 1); 
///用户名称长度的定义
const int TF_USERNAME_LEN = (80 + 1); 
///组合名称长度的定义
const int TF_COMBONAME_LEN = (80 + 1); 
///资产单元编号（UFX Only）长度的定义
const int TF_ASSETNO_LEN = (16 + 1); 
///备注长度的定义
const int TF_MEMO_LEN = (80 + 1); 
///成交编号长度的定义
const int TF_TRADEID_LEN = (20 + 1); 
///报单编号长度的定义
const int TF_ORDERSYSID_LEN = (16 + 1); 
///本地报单编号长度的定义
const int TF_ORDERLOCALID_LEN = (12 + 1); 
///报单引用长度的定义
const int TF_ORDERREF_LEN = (50 + 1); 
///取消报单引用长度的定义
const int TF_ORDERCANCELREF_LEN = (10 + 1); 
///交易所交易员代码长度的定义
const int TF_BRANCHPBU_LEN = (20 + 1); 
///资金账户代码长度的定义
const int TF_ACCOUNTCODE_LEN = (30 + 1); 
///开平标志长度的定义
const int TF_COMBOFFSETFLAG_LEN = (4 + 1); 
///投机套保标志长度的定义
const int TF_COMBHEDGEFLAG_LEN = (4 + 1); 
///被撤单引用长度的定义
const int TF_ORDERACTIONREF_LEN = (10 + 1); 
///状态信息长度的定义
const int TF_STATUSMSG_LEN = (80 + 1); 
///错误信息长度的定义
const int TF_ERRORMSG_LEN = (80 + 1); 
///可用组合列表（以|分割）长度的定义
const int TF_COMBOIDLIST_LEN = (512 + 1); 
///证券交易代码长度的定义
const int TF_INSTRUMENTCODE_LEN = (20 + 1); 
///交易所名称长度的定义
const int TF_EXCHANGENAME_LEN = (50 + 1); 
///席位名称长度的定义
const int TF_SEATNAME_LEN = (50 + 1); 
///证件号长度的定义
const int TF_IDCARDNO_LEN = (100 + 1); 
///投资者账户子编码长度的定义
const int TF_OPTCLIENTID_LEN = (10 + 1); 
///分组编号长度的定义
const int TF_GROUPID_LEN = (14 + 1); 
///分组名称长度的定义
const int TF_GROUPNAME_LEN = (50 + 1); 
///组织架构代码长度的定义
const int TF_DEPARTMENTID_LEN = (14 + 1); 
///组织架构名称长度的定义
const int TF_DEPTNAME_LEN = (50 + 1); 
///操作员名称长度的定义
const int TF_OPERATORNAME_LEN = (20 + 1); 
///产品名称长度的定义
const int TF_PRODUCTNAME_LEN = (50 + 1); 
///投资单元代码长度的定义
const int TF_INVESTUNITID_LEN = (14 + 1); 
///席位号长度的定义
const int TF_SEATID_LEN = (10 + 1); 
///资金账户名称长度的定义
const int TF_ACCOUNTNAME_LEN = (50 + 1); 
///币种代码长度的定义
const int TF_CURRENCYID_LEN = (3 + 1); 
///投资单元名称长度的定义
const int TF_INVESTUNITNAME_LEN = (50 + 1); 
///投资组合代码长度的定义
const int TF_PORTFOLIOID_LEN = (14 + 1); 
///交易编码长度的定义
const int TF_TRADECODE_LEN = (18 + 1); 
///规则代码长度的定义
const int TF_RULECODE_LEN = (128 + 1); 
///规则名称长度的定义
const int TF_RULENAME_LEN = (50 + 1); 
///修改内容明细（json字符串）长度的定义
const int TF_VALUE_LEN = (768 + 1); 
///预留字段1长度的定义
const int TF_THIRDREFF1_LEN = (20 + 1); 
///预留字段2长度的定义
const int TF_THIRDREFF2_LEN = (50 + 1); 
///前置地址长度的定义
const int TF_FRONTADDRESS_LEN = (31 + 1); 
///流文件路径长度的定义
const int TF_FLOWPATH_LEN = (127 + 1); 
///指令代码长度的定义
const int TF_ADMINCODE_LEN = (32 + 1); 
///基础商品代码长度的定义
const int TF_UNDERLYINGINSTRUMENTID_LEN = (30 + 1); 
///投资组合对应的合约代码长度的定义
const int TF_KEYINSTRUMENTID_LEN = (30 + 1); 
///公司名称长度的定义
const int TF_COMPANYNAME_LEN = (50 + 1); 
///操作员角色长度的定义
const int TF_OPROLES_LEN = (100 + 1); 
///(已废除)操作员可以查询的账户集合长度的定义
const int TF_QRYACCOUNTIDS_LEN = (500 + 1); 
///(已废除)操作员可以操作的账户集合长度的定义
const int TF_OPACCOUNTIDS_LEN = (500 + 1); 
///操作员可以查询的组合集合长度的定义
const int TF_QRYCOMBOIDS_LEN = (500 + 1); 
///操作员可以操作的组合集合长度的定义
const int TF_OPCOMBOIDS_LEN = (500 + 1); 
///联系人长度的定义
const int TF_LINKMAN_LEN = (40 + 1); 
///联系地址长度的定义
const int TF_ADDRESS_LEN = (50 + 1); 
///联系电话长度的定义
const int TF_TEL_LEN = (40 + 1); 
///电子邮箱长度的定义
const int TF_EMAIL_LEN = (40 + 1); 
///操作员电话长度的定义
const int TF_OPTEL_LEN = (40 + 1); 
///操作员邮箱长度的定义
const int TF_OPEMAIL_LEN = (40 + 1); 
///注册时间长度的定义
const int TF_REGIDATE_LEN = (14 + 1); 
///修改时间长度的定义
const int TF_UPTTIME_LEN = (14 + 1); 
///登录时间长度的定义
const int TF_LOGTIME_LEN = (14 + 1); 
///密码修改时间长度的定义
const int TF_PWDUPTTIME_LEN = (14 + 1); 
///登录错误时间长度的定义
const int TF_LOGERRTIME_LEN = (14 + 1); 
///权限ID长度的定义
const int TF_AUTHID_LEN = (8 + 1); 
///权限描述长度的定义
const int TF_AUTHDESC_LEN = (30 + 1); 
///父权限长度的定义
const int TF_PARENTID_LEN = (8 + 1); 
///动作长度的定义
const int TF_ACTION_LEN = (60 + 1); 
///动作描述长度的定义
const int TF_ACTIONDESC_LEN = (3000 + 1); 
///保留长度的定义
const int TF_RESV_LEN = (300 + 1); 
///创建时间长度的定义
const int TF_CRTTIME_LEN = (14 + 1); 
///最近一次更新时间长度的定义
const int TF_LASTUPTTIME_LEN = (14 + 1); 
///最近一次使用时间长度的定义
const int TF_LASTUSRTIME_LEN = (14 + 1); 
///接口标识长度的定义
const int TF_CMDID_LEN = (100 + 1); 
///系统流水长度的定义
const int TF_SYSSEQID_LEN = (10 + 1); 
///后缀文件类型长度的定义
const int TF_FILEPOSTFIX_LEN = (10 + 1); 
///角色号长度的定义
const int TF_ROLEID_LEN = (3 + 1); 
///角色名称长度的定义
const int TF_ROLENAME_LEN = (20 + 1); 
///文件名称长度的定义
const int TF_FILENAME_LEN = (120 + 1); 
///文件存储路径长度的定义
const int TF_FILEURL_LEN = (120 + 1); 
///文件查询条件长度的定义
const int TF_FILEINFO_LEN = (120 + 1); 
///序列名称长度的定义
const int TF_SEQNAME_LEN = (50 + 1); 
///连接IP地址白名单长度的定义
const int TF_IPADDRESS_LEN = (500 + 1); 
///最近缴费时间长度的定义
const int TF_LASTPAYTIME_LEN = (14 + 1); 
///缴费时间长度的定义
const int TF_PAYTIME_LEN = (14 + 1); 
///客户号长度的定义
const int TF_CLIENTID_LEN = (50 + 1); 
///通道名称长度的定义
const int TF_CHANNELNAME_LEN = (50 + 1); 
///分仓接口IP长度的定义
const int TF_SYSIP_LEN = (20 + 1); 
///分仓接口端口长度的定义
const int TF_SYSPORT_LEN = (10 + 1); 
///分仓其他配置长度的定义
const int TF_CHANNELCONFIG_LEN = (256 + 1); 
///备注长度的定义
const int TF_REMARK_LEN = (200 + 1); 
///订单IP长度的定义
const int TF_ORDERIP_LEN = (20 + 1); 
///订单MAC长度的定义
const int TF_ORDERMAC_LEN = (20 + 1); 
///订单硬盘序列号长度的定义
const int TF_ORDERHDNUM_LEN = (50 + 1); 
///订单机器码长度的定义
const int TF_ORDERMACCODE_LEN = (50 + 1); 
///订单操作系统长度的定义
const int TF_ORDEROS_LEN = (50 + 1); 
///交易所代码长度的定义
const int TF_EXCHANGEIDS_LEN = (256 + 1); 
///账户集合长度的定义
const int TF_ACCOUNTIDS_LEN = (512 + 1); 
///证券代码集合长度的定义
const int TF_INSTRUMENTIDS_LEN = (512 + 1); 
///O32操作员代码长度的定义
const int TF_O32OPERATORNO_LEN = (15 + 1); 
///O32操作员密码长度的定义
const int TF_O32OPERATORPWD_LEN = (15 + 1); 
///O32基金代码长度的定义
const int TF_O32ACCOUNTCODE_LEN = (31 + 1); 
///O32组合编号长度的定义
const int TF_O32COMBINO_LEN = (15 + 1); 
///O32资产单元编号长度的定义
const int TF_O32ASSETNO_LEN = (15 + 1); 
///客户端特征码长度的定义
const int TF_FEATURETOKEN_LEN = (500 + 1); 
///终端版本号长度的定义
const int TF_TERMINALVERESION_LEN = (32 + 1); 
///终端特征码长度的定义
const int TF_FEATURECODE_LEN = (100 + 1); 
///MAC地址列表长度的定义
const int TF_MACADDRESSES_LEN = (200 + 1); 
///参数标识长度的定义
const int TF_SYSTEMCONFIGKEY_LEN = (64 + 1); 
///参数项名称长度的定义
const int TF_SYSTEMCONFIGNAME_LEN = (64 + 1); 
///参数类型长度的定义
const int TF_SYSTEMCONFIGTYPE_LEN = (64 + 1); 
///参数值长度的定义
const int TF_SYSTEMCONFIGVALUE_LEN = (64 + 1); 
 
static const char *TF_EXCHANGE_SSE = "SH";
static const char *TF_EXCHANGE_SZSE = "SZ";
static const char *TF_EXCHANGE_CFFEX = "CFFEX";
static const char *TF_EXCHANGE_SHFE = "SHFE";
static const char *TF_EXCHANGE_DCE = "DCE";
static const char *TF_EXCHANGE_CZCE = "CZCE";
static const char *TF_EXCHANGE_INE = "INE";
}}

#endif
  