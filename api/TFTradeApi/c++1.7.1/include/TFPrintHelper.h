

#ifndef TF_PRINT_HELPER_H
#define TF_PRINT_HELPER_H
        
#define TFLOGSTR(v) "\n\t" #v "\t\t:[" << (strlen(v) == 0 ? "" : (v)) << "]"
#define TFLOGCOM(v) "\n\t" #v "\t\t:[" << (v) << "]"
#define TFLOGCHAR(v) "\n\t" #v "\t\t:[" << ((v) == 0 ? '`' : (v)) << "]"
#define TFLOGBOOL(v) "\n\t" #v "\t\t:[" << ((v) == 0 ? '0' : ('1')) << "]"

    
#define TFLOGTRADEDATE(pTradeDate)         "\n TradeDate:"\
    << TFLOGCOM((pTradeDate)->ChannelID)\
    << TFLOGCOM((pTradeDate)->TradingDay)\
    << TFLOGCOM((pTradeDate)->NextTradingDay)\
    << TFLOGCHAR((pTradeDate)->SystemStatus)\
    << TFLOGCOM((pTradeDate)->Required)\
    << ";"
        
#define TFLOGINSTRUMENT(pInstrument)         "\n Instrument:"\
    << TFLOGSTR((pInstrument)->ExchangeID)\
    << TFLOGSTR((pInstrument)->ProductID)\
    << TFLOGSTR((pInstrument)->InstrumentID)\
    << TFLOGSTR((pInstrument)->InstrumentCode)\
    << TFLOGSTR((pInstrument)->InstrumentName)\
    << TFLOGCHAR((pInstrument)->ProductClass)\
    << TFLOGCOM((pInstrument)->VolumeMultiple)\
    << TFLOGCOM((pInstrument)->PriceTick)\
    << TFLOGCOM((pInstrument)->OpenDate)\
    << TFLOGCOM((pInstrument)->ExpireDate)\
    << TFLOGCOM((pInstrument)->IsTrading)\
    << TFLOGCOM((pInstrument)->ExecPrice)\
    << TFLOGCOM((pInstrument)->UnitMargin)\
    << TFLOGCOM((pInstrument)->TradingDay)\
    << TFLOGCOM((pInstrument)->ExerciseDay)\
    << TFLOGCOM((pInstrument)->StartDeliveryDay)\
    << TFLOGCOM((pInstrument)->EndDeliveryDay)\
    << TFLOGCOM((pInstrument)->MaxMarketOrderVolume)\
    << TFLOGCOM((pInstrument)->MinMarketOrderVolume)\
    << TFLOGCOM((pInstrument)->MaxLimitOrderVolume)\
    << TFLOGCOM((pInstrument)->MinLimitOrderVolume)\
    << TFLOGCOM((pInstrument)->UpperLimitPrice)\
    << TFLOGCOM((pInstrument)->LowerLimitPrice)\
    << TFLOGCHAR((pInstrument)->OptionType)\
    << TFLOGCOM((pInstrument)->BuyVolumeTick)\
    << TFLOGCOM((pInstrument)->SellVolumeTick)\
    << TFLOGSTR((pInstrument)->UnderlyingInstrumentID)\
    << TFLOGCOM((pInstrument)->UnderlyingMultiple)\
    << TFLOGCHAR((pInstrument)->StockRealBack)\
    << TFLOGCHAR((pInstrument)->FundRealBack)\
    << TFLOGCHAR((pInstrument)->UnderlyingType)\
    << TFLOGCOM((pInstrument)->PreClosePrice)\
    << TFLOGCOM((pInstrument)->PreSettlementPrice)\
    << TFLOGCOM((pInstrument)->MarginRatioExpiring)\
    << TFLOGCOM((pInstrument)->ChannelID)\
    << TFLOGCHAR((pInstrument)->SubProductClass)\
    << ";"
        
#define TFLOGCOMPANY(pCompany)         "\n Company:"\
    << TFLOGCOM((pCompany)->CompanyID)\
    << TFLOGSTR((pCompany)->CompanyName)\
    << TFLOGCHAR((pCompany)->CompanyType)\
    << TFLOGSTR((pCompany)->LinkMan)\
    << TFLOGSTR((pCompany)->Address)\
    << TFLOGSTR((pCompany)->Tel)\
    << TFLOGSTR((pCompany)->Email)\
    << ";"
        
#define TFLOGOPERATOR(pOperator)         "\n Operator:"\
    << TFLOGCOM((pOperator)->OperatorID)\
    << TFLOGCOM((pOperator)->CompanyID)\
    << TFLOGSTR((pOperator)->OperatorName)\
    << TFLOGSTR((pOperator)->Password)\
    << TFLOGSTR((pOperator)->OpRoles)\
    << TFLOGSTR((pOperator)->QryAccountIDs)\
    << TFLOGSTR((pOperator)->OpAccountIDs)\
    << TFLOGSTR((pOperator)->QryComboIDs)\
    << TFLOGSTR((pOperator)->OpComboIDs)\
    << TFLOGSTR((pOperator)->OpTel)\
    << TFLOGSTR((pOperator)->OpEmail)\
    << TFLOGSTR((pOperator)->RegiDate)\
    << TFLOGCHAR((pOperator)->EnbFlag)\
    << TFLOGSTR((pOperator)->UptTime)\
    << TFLOGSTR((pOperator)->LogTime)\
    << TFLOGSTR((pOperator)->PwdUptTime)\
    << TFLOGSTR((pOperator)->LogErrTime)\
    << TFLOGCOM((pOperator)->PwdErrCnt)\
    << TFLOGSTR((pOperator)->Remark)\
    << TFLOGCHAR((pOperator)->CompanyType)\
    << TFLOGSTR((pOperator)->MacAddresses)\
    << TFLOGBOOL((pOperator)->EnbInternet)\
    << ";"
        
#define TFLOGAUTHINFO(pAuthInfo)         "\n AuthInfo:"\
    << TFLOGSTR((pAuthInfo)->AuthID)\
    << TFLOGCOM((pAuthInfo)->AuthLevel)\
    << TFLOGSTR((pAuthInfo)->AuthDesc)\
    << TFLOGSTR((pAuthInfo)->ParentID)\
    << TFLOGCOM((pAuthInfo)->HaveSon)\
    << TFLOGCOM((pAuthInfo)->ID)\
    << TFLOGCHAR((pAuthInfo)->EnbFlag)\
    << TFLOGCOM((pAuthInfo)->IsDefault)\
    << TFLOGCOM((pAuthInfo)->IsDisplay)\
    << TFLOGSTR((pAuthInfo)->Action)\
    << TFLOGSTR((pAuthInfo)->Resv)\
    << TFLOGSTR((pAuthInfo)->CrtTime)\
    << TFLOGSTR((pAuthInfo)->LastUptTime)\
    << TFLOGCHAR((pAuthInfo)->ActionType)\
    << TFLOGCHAR((pAuthInfo)->AuthType)\
    << ";"
        
#define TFLOGOPAUTHINFO(pOpAuthInfo)         "\n OpAuthInfo:"\
    << TFLOGCOM((pOpAuthInfo)->OperatorID)\
    << TFLOGSTR((pOpAuthInfo)->AuthID)\
    << TFLOGCHAR((pOpAuthInfo)->EnbFlag)\
    << TFLOGSTR((pOpAuthInfo)->LastUsrTime)\
    << TFLOGCOM((pOpAuthInfo)->UsrCount)\
    << TFLOGSTR((pOpAuthInfo)->Resv)\
    << TFLOGSTR((pOpAuthInfo)->CrtTime)\
    << TFLOGSTR((pOpAuthInfo)->LastUptTime)\
    << ";"
        
#define TFLOGINTEFAUTHINFO(pIntefAuthInfo)         "\n IntefAuthInfo:"\
    << TFLOGSTR((pIntefAuthInfo)->CmdID)\
    << TFLOGSTR((pIntefAuthInfo)->AuthID)\
    << ";"
        
#define TFLOGOPLOG(pOpLog)         "\n OpLog:"\
    << TFLOGCOM((pOpLog)->SysDate)\
    << TFLOGCOM((pOpLog)->SysTime)\
    << TFLOGCOM((pOpLog)->OperatorID)\
    << TFLOGSTR((pOpLog)->Action)\
    << TFLOGSTR((pOpLog)->ActionDesc)\
    << ";"
        
#define TFLOGROLE(pRole)         "\n Role:"\
    << TFLOGSTR((pRole)->RoleID)\
    << TFLOGSTR((pRole)->RoleName)\
    << TFLOGCHAR((pRole)->CompanyType)\
    << ";"
        
#define TFLOGROLEAUTH(pRoleAuth)         "\n RoleAuth:"\
    << TFLOGSTR((pRoleAuth)->RoleID)\
    << TFLOGSTR((pRoleAuth)->AuthID)\
    << ";"
        
#define TFLOGFILEDOWNLOAD(pFileDownload)         "\n FileDownload:"\
    << TFLOGCOM((pFileDownload)->SysDate)\
    << TFLOGSTR((pFileDownload)->SysSeqID)\
    << TFLOGCOM((pFileDownload)->OperatorID)\
    << TFLOGSTR((pFileDownload)->FileName)\
    << TFLOGSTR((pFileDownload)->FileUrl)\
    << TFLOGSTR((pFileDownload)->FileInfo)\
    << TFLOGCHAR((pFileDownload)->FileFlag)\
    << TFLOGSTR((pFileDownload)->FilePostFix)\
    << TFLOGCOM((pFileDownload)->CreateDate)\
    << TFLOGCOM((pFileDownload)->CreateTime)\
    << TFLOGCOM((pFileDownload)->UpdateDate)\
    << TFLOGCOM((pFileDownload)->UpdateTime)\
    << ";"
        
#define TFLOGCMDSEQUENCE(pCmdSequence)         "\n CmdSequence:"\
    << TFLOGSTR((pCmdSequence)->SeqName)\
    << TFLOGCOM((pCmdSequence)->CurrentVal)\
    << TFLOGCOM((pCmdSequence)->IncrementVal)\
    << ";"
        
#define TFLOGOPMARKET(pOpMarket)         "\n OpMarket:"\
    << TFLOGCOM((pOpMarket)->CompanyID)\
    << TFLOGCHAR((pOpMarket)->MarketDataType)\
    << TFLOGCOM((pOpMarket)->OperatorID)\
    << TFLOGCOM((pOpMarket)->LimitConNum)\
    << TFLOGCOM((pOpMarket)->LimitSubNum)\
    << TFLOGSTR((pOpMarket)->IpAddress)\
    << ";"
        
#define TFLOGMARKETDATAPAY(pMarketDataPay)         "\n MarketDataPay:"\
    << TFLOGCOM((pMarketDataPay)->CompanyID)\
    << TFLOGSTR((pMarketDataPay)->ExchangeID)\
    << TFLOGCHAR((pMarketDataPay)->PaySubject)\
    << TFLOGSTR((pMarketDataPay)->LastPayTime)\
    << TFLOGCOM((pMarketDataPay)->PayBalance)\
    << TFLOGCOM((pMarketDataPay)->StartDate)\
    << TFLOGCOM((pMarketDataPay)->EndDate)\
    << ";"
        
#define TFLOGMARKETDATAPAYFLOW(pMarketDataPayFlow)         "\n MarketDataPayFlow:"\
    << TFLOGCOM((pMarketDataPayFlow)->PayID)\
    << TFLOGCOM((pMarketDataPayFlow)->CompanyID)\
    << TFLOGSTR((pMarketDataPayFlow)->ExchangeID)\
    << TFLOGCHAR((pMarketDataPayFlow)->PaySubject)\
    << TFLOGSTR((pMarketDataPayFlow)->PayTime)\
    << TFLOGCOM((pMarketDataPayFlow)->PayBalance)\
    << TFLOGCOM((pMarketDataPayFlow)->StartDate)\
    << TFLOGCOM((pMarketDataPayFlow)->EndDate)\
    << ";"
        
#define TFLOGACCOUNT(pAccount)         "\n Account:"\
    << TFLOGCOM((pAccount)->AccountID)\
    << TFLOGCOM((pAccount)->CompanyID)\
    << TFLOGSTR((pAccount)->AccountName)\
    << TFLOGCOM((pAccount)->InvestorID)\
    << TFLOGCHAR((pAccount)->AccountType)\
    << TFLOGCHAR((pAccount)->EnbFlag)\
    << TFLOGCOM((pAccount)->TradingDay)\
    << TFLOGCOM((pAccount)->ChannelID)\
    << TFLOGCOM((pAccount)->DefaultCombo)\
    << TFLOGCOM((pAccount)->MarginRatio)\
    << ";"
        
#define TFLOGACCOUNTCOMBO(pAccountCombo)         "\n AccountCombo:"\
    << TFLOGCOM((pAccountCombo)->ComboID)\
    << TFLOGCOM((pAccountCombo)->AccountID)\
    << TFLOGSTR((pAccountCombo)->ComboName)\
    << TFLOGSTR((pAccountCombo)->ExchangeID)\
    << TFLOGSTR((pAccountCombo)->KeyInstrumentID)\
    << TFLOGCOM((pAccountCombo)->IsActive)\
    << TFLOGCOM((pAccountCombo)->IsDefault)\
    << TFLOGCOM((pAccountCombo)->TradingDay)\
    << TFLOGBOOL((pAccountCombo)->DayTradeEnable)\
    << ";"
        
#define TFLOGINVESTOR(pInvestor)         "\n Investor:"\
    << TFLOGCOM((pInvestor)->InvestorID)\
    << TFLOGCOM((pInvestor)->TradingDay)\
    << TFLOGSTR((pInvestor)->BrokerID)\
    << TFLOGSTR((pInvestor)->BrokerInvestorID)\
    << TFLOGSTR((pInvestor)->UserID)\
    << TFLOGSTR((pInvestor)->ClientID)\
    << TFLOGSTR((pInvestor)->AccountCode)\
    << TFLOGSTR((pInvestor)->Password)\
    << TFLOGSTR((pInvestor)->InvestorName)\
    << TFLOGCHAR((pInvestor)->InvestorType)\
    << TFLOGCHAR((pInvestor)->IDCardType)\
    << TFLOGSTR((pInvestor)->IDCardNo)\
    << TFLOGCOM((pInvestor)->IsActive)\
    << TFLOGSTR((pInvestor)->GroupID)\
    << TFLOGSTR((pInvestor)->O32OperatorNo)\
    << TFLOGSTR((pInvestor)->O32OperatorPwd)\
    << TFLOGSTR((pInvestor)->O32AccountCode)\
    << TFLOGSTR((pInvestor)->O32CombiNo)\
    << TFLOGSTR((pInvestor)->O32AssetNo)\
    << ";"
        
#define TFLOGTRADINGCODE(pTradingCode)         "\n TradingCode:"\
    << TFLOGCOM((pTradingCode)->TradingDay)\
    << TFLOGCOM((pTradingCode)->AccountID)\
    << TFLOGSTR((pTradingCode)->ExchangeID)\
    << TFLOGCHAR((pTradingCode)->TradingCodeType)\
    << TFLOGSTR((pTradingCode)->TradeCode)\
    << TFLOGSTR((pTradingCode)->BranchID)\
    << TFLOGSTR((pTradingCode)->SeatID)\
    << TFLOGSTR((pTradingCode)->OptClientID)\
    << TFLOGCOM((pTradingCode)->IsActive)\
    << ";"
        
#define TFLOGTRADECHANNEL(pTradeChannel)         "\n TradeChannel:"\
    << TFLOGCOM((pTradeChannel)->ChannelID)\
    << TFLOGSTR((pTradeChannel)->ChannelName)\
    << TFLOGCHAR((pTradeChannel)->ChannelType)\
    << TFLOGSTR((pTradeChannel)->SysIP)\
    << TFLOGSTR((pTradeChannel)->SysPort)\
    << TFLOGSTR((pTradeChannel)->ChannelConfig)\
    << TFLOGCOM((pTradeChannel)->TradingDay)\
    << ";"
        
#define TFLOGACCOUNTASSET(pAccountAsset)         "\n AccountAsset:"\
    << TFLOGCOM((pAccountAsset)->TradingDay)\
    << TFLOGCOM((pAccountAsset)->AccountID)\
    << TFLOGSTR((pAccountAsset)->CurrencyID)\
    << TFLOGCOM((pAccountAsset)->PreDeposit)\
    << TFLOGCOM((pAccountAsset)->PreMargin)\
    << TFLOGCOM((pAccountAsset)->PreBalance)\
    << TFLOGCOM((pAccountAsset)->Balance)\
    << TFLOGCOM((pAccountAsset)->Deposit)\
    << TFLOGCOM((pAccountAsset)->FrozenMargin)\
    << TFLOGCOM((pAccountAsset)->FrozenCommission)\
    << TFLOGCOM((pAccountAsset)->FrozenCash)\
    << TFLOGCOM((pAccountAsset)->ManualFrozenCash)\
    << TFLOGCOM((pAccountAsset)->CheckCash)\
    << TFLOGCOM((pAccountAsset)->UseMargin)\
    << TFLOGCOM((pAccountAsset)->Commission)\
    << TFLOGCOM((pAccountAsset)->WithdrawQuota)\
    << TFLOGCOM((pAccountAsset)->Credit)\
    << TFLOGCOM((pAccountAsset)->Available)\
    << TFLOGCOM((pAccountAsset)->CloseProfit)\
    << TFLOGCOM((pAccountAsset)->PositionProfit)\
    << TFLOGCOM((pAccountAsset)->CashIn)\
    << TFLOGCOM((pAccountAsset)->CashOut)\
    << TFLOGCOM((pAccountAsset)->IsDefault)\
    << ";"
        
#define TFLOGUSERACCOUNTASSET(pUserAccountAsset)         "\n UserAccountAsset:"\
    << TFLOGCOM((pUserAccountAsset)->AccountID)\
    << TFLOGSTR((pUserAccountAsset)->AccountName)\
    << TFLOGCOM((pUserAccountAsset)->Balance)\
    << TFLOGCOM((pUserAccountAsset)->EnableBalance)\
    << TFLOGCOM((pUserAccountAsset)->FrozenCash)\
    << TFLOGCOM((pUserAccountAsset)->ManualFrozenCash)\
    << TFLOGCOM((pUserAccountAsset)->CheckCash)\
    << TFLOGCOM((pUserAccountAsset)->UseMargin)\
    << ";"
        
#define TFLOGACCOUNTPOSITION(pAccountPosition)         "\n AccountPosition:"\
    << TFLOGCOM((pAccountPosition)->AccountID)\
    << TFLOGSTR((pAccountPosition)->ExchangeID)\
    << TFLOGSTR((pAccountPosition)->InstrumentID)\
    << TFLOGCHAR((pAccountPosition)->CoveredFlag)\
    << TFLOGCHAR((pAccountPosition)->PosiDirection)\
    << TFLOGSTR((pAccountPosition)->TradeCode)\
    << TFLOGCHAR((pAccountPosition)->TradingCodeType)\
    << TFLOGCOM((pAccountPosition)->TradingDay)\
    << TFLOGCOM((pAccountPosition)->YdPosition)\
    << TFLOGCOM((pAccountPosition)->PreMargin)\
    << TFLOGCOM((pAccountPosition)->TodayPosition)\
    << TFLOGCOM((pAccountPosition)->TotalPosition)\
    << TFLOGCOM((pAccountPosition)->UseMargin)\
    << TFLOGCOM((pAccountPosition)->OpenVolume)\
    << TFLOGCOM((pAccountPosition)->CloseVolume)\
    << TFLOGCOM((pAccountPosition)->CloseYdVolume)\
    << TFLOGCOM((pAccountPosition)->SettlementPrice)\
    << TFLOGCOM((pAccountPosition)->PreSettlementPrice)\
    << TFLOGCOM((pAccountPosition)->Commission)\
    << TFLOGCOM((pAccountPosition)->FrozenCommission)\
    << TFLOGCOM((pAccountPosition)->FrozenMargin)\
    << TFLOGCOM((pAccountPosition)->OpenCost)\
    << TFLOGCOM((pAccountPosition)->PositionCost)\
    << TFLOGCOM((pAccountPosition)->CloseProfit)\
    << TFLOGCOM((pAccountPosition)->PositionProfit)\
    << TFLOGCOM((pAccountPosition)->OpenAmount)\
    << TFLOGCOM((pAccountPosition)->CloseAmount)\
    << TFLOGCOM((pAccountPosition)->CloseYdAmount)\
    << TFLOGCOM((pAccountPosition)->LongFrozen)\
    << TFLOGCOM((pAccountPosition)->LongFrozenAmount)\
    << TFLOGCOM((pAccountPosition)->ShortFrozen)\
    << TFLOGCOM((pAccountPosition)->ShortFrozenAmount)\
    << TFLOGCOM((pAccountPosition)->FrozenVolume)\
    << TFLOGCOM((pAccountPosition)->ManualFrozenVolume)\
    << TFLOGCOM((pAccountPosition)->CheckVolume)\
    << TFLOGCOM((pAccountPosition)->EnableVolume)\
    << ";"
        
#define TFLOGUSERCOMBOPOSITION(pUserComboPosition)         "\n UserComboPosition:"\
    << TFLOGCOM((pUserComboPosition)->AccountID)\
    << TFLOGSTR((pUserComboPosition)->AccountName)\
    << TFLOGCOM((pUserComboPosition)->ComboID)\
    << TFLOGSTR((pUserComboPosition)->ComboName)\
    << TFLOGSTR((pUserComboPosition)->ExchangeID)\
    << TFLOGSTR((pUserComboPosition)->InstrumentID)\
    << TFLOGSTR((pUserComboPosition)->InstrumentName)\
    << TFLOGCOM((pUserComboPosition)->YdPosition)\
    << TFLOGCOM((pUserComboPosition)->TodayPosition)\
    << TFLOGCOM((pUserComboPosition)->TotalPosition)\
    << TFLOGCOM((pUserComboPosition)->YdFrozenVolume)\
    << TFLOGCOM((pUserComboPosition)->TodayFrozenVolume)\
    << TFLOGCOM((pUserComboPosition)->FrozenVolume)\
    << TFLOGCOM((pUserComboPosition)->ManualFrozenVolume)\
    << TFLOGCOM((pUserComboPosition)->CheckVolume)\
    << TFLOGCOM((pUserComboPosition)->TodayCheckVolume)\
    << TFLOGCOM((pUserComboPosition)->YdCheckVolume)\
    << TFLOGCOM((pUserComboPosition)->TodayEnableVolume)\
    << TFLOGCOM((pUserComboPosition)->YdEnableVolume)\
    << TFLOGCOM((pUserComboPosition)->EnableVolume)\
    << TFLOGCOM((pUserComboPosition)->PositionCost)\
    << TFLOGCOM((pUserComboPosition)->CostPrice)\
    << TFLOGCOM((pUserComboPosition)->LastPrice)\
    << TFLOGCOM((pUserComboPosition)->OpenMarketValue)\
    << TFLOGCOM((pUserComboPosition)->FloatProfi)\
    << TFLOGCOM((pUserComboPosition)->LongFrozen)\
    << TFLOGCOM((pUserComboPosition)->ShortFrozen)\
    << TFLOGCOM((pUserComboPosition)->DayTradeInitVolume)\
    << TFLOGCOM((pUserComboPosition)->DayTradeAvailVolume)\
    << TFLOGCOM((pUserComboPosition)->DayTradeFloatProfitLoss)\
    << TFLOGCOM((pUserComboPosition)->DayTradePositionCost)\
    << TFLOGCOM((pUserComboPosition)->DayTradeCloseProfit)\
    << TFLOGCOM((pUserComboPosition)->DayTradeAccumBuy)\
    << TFLOGCOM((pUserComboPosition)->DayTradeAccumSell)\
    << TFLOGCOM((pUserComboPosition)->DayTradePosFrozen)\
    << TFLOGCHAR((pUserComboPosition)->PosiDirection)\
    << TFLOGCHAR((pUserComboPosition)->HedgeFlag)\
    << TFLOGCOM((pUserComboPosition)->CloseProfit)\
    << TFLOGCOM((pUserComboPosition)->UseMargin)\
    << ";"
        
#define TFLOGCOMBOPOSITION(pComboPosition)         "\n ComboPosition:"\
    << TFLOGCOM((pComboPosition)->AccountID)\
    << TFLOGSTR((pComboPosition)->ExchangeID)\
    << TFLOGCOM((pComboPosition)->ComboID)\
    << TFLOGSTR((pComboPosition)->InstrumentID)\
    << TFLOGCHAR((pComboPosition)->CoveredFlag)\
    << TFLOGCHAR((pComboPosition)->PosiDirection)\
    << TFLOGSTR((pComboPosition)->TradeCode)\
    << TFLOGCHAR((pComboPosition)->TradingCodeType)\
    << TFLOGCOM((pComboPosition)->TradingDay)\
    << TFLOGCOM((pComboPosition)->YdPosition)\
    << TFLOGCOM((pComboPosition)->PreMargin)\
    << TFLOGCOM((pComboPosition)->TodayPosition)\
    << TFLOGCOM((pComboPosition)->TotalPosition)\
    << TFLOGCOM((pComboPosition)->UseMargin)\
    << TFLOGCOM((pComboPosition)->OpenVolume)\
    << TFLOGCOM((pComboPosition)->CloseVolume)\
    << TFLOGCOM((pComboPosition)->CloseYdVolume)\
    << TFLOGCOM((pComboPosition)->SettlementPrice)\
    << TFLOGCOM((pComboPosition)->PreSettlementPrice)\
    << TFLOGCOM((pComboPosition)->Commission)\
    << TFLOGCOM((pComboPosition)->FrozenCommission)\
    << TFLOGCOM((pComboPosition)->FrozenMargin)\
    << TFLOGCOM((pComboPosition)->OpenCost)\
    << TFLOGCOM((pComboPosition)->PositionCost)\
    << TFLOGCOM((pComboPosition)->CloseProfit)\
    << TFLOGCOM((pComboPosition)->PositionProfit)\
    << TFLOGCOM((pComboPosition)->OpenAmount)\
    << TFLOGCOM((pComboPosition)->CloseAmount)\
    << TFLOGCOM((pComboPosition)->CloseYdAmount)\
    << TFLOGCOM((pComboPosition)->LongFrozen)\
    << TFLOGCOM((pComboPosition)->LongFrozenAmount)\
    << TFLOGCOM((pComboPosition)->ShortFrozen)\
    << TFLOGCOM((pComboPosition)->ShortFrozenAmount)\
    << TFLOGCOM((pComboPosition)->YdFrozenVolume)\
    << TFLOGCOM((pComboPosition)->TodayFrozenVolume)\
    << TFLOGCOM((pComboPosition)->FrozenVolume)\
    << TFLOGCOM((pComboPosition)->ManualFrozenVolume)\
    << TFLOGCOM((pComboPosition)->CheckVolume)\
    << TFLOGCOM((pComboPosition)->TodayCheckVolume)\
    << TFLOGCOM((pComboPosition)->YdCheckVolume)\
    << TFLOGCOM((pComboPosition)->EnableVolume)\
    << TFLOGCOM((pComboPosition)->TodayEnableVolume)\
    << TFLOGCOM((pComboPosition)->YdEnableVolume)\
    << TFLOGCOM((pComboPosition)->DayTradeInitVolume)\
    << TFLOGCOM((pComboPosition)->DayTradeAvailVolume)\
    << TFLOGCOM((pComboPosition)->DayTradeFloatProfitLoss)\
    << TFLOGCOM((pComboPosition)->DayTradePositionCost)\
    << TFLOGCOM((pComboPosition)->DayTradeCloseProfit)\
    << TFLOGCOM((pComboPosition)->DayTradeAccumBuy)\
    << TFLOGCOM((pComboPosition)->DayTradeAccumSell)\
    << TFLOGCOM((pComboPosition)->DayTradePosFrozen)\
    << ";"
        
#define TFLOGACCOUNTPOSITIONDTL(pAccountPositionDtl)         "\n AccountPositionDtl:"\
    << TFLOGCOM((pAccountPositionDtl)->AccountID)\
    << TFLOGSTR((pAccountPositionDtl)->ExchangeID)\
    << TFLOGCOM((pAccountPositionDtl)->ComboID)\
    << TFLOGSTR((pAccountPositionDtl)->InstrumentID)\
    << TFLOGCHAR((pAccountPositionDtl)->CoveredFlag)\
    << TFLOGCHAR((pAccountPositionDtl)->PosiDirection)\
    << TFLOGCOM((pAccountPositionDtl)->OpenDate)\
    << TFLOGSTR((pAccountPositionDtl)->TradeID)\
    << TFLOGSTR((pAccountPositionDtl)->TradeCode)\
    << TFLOGCHAR((pAccountPositionDtl)->TradingCodeType)\
    << TFLOGCOM((pAccountPositionDtl)->TradingDay)\
    << TFLOGCOM((pAccountPositionDtl)->Volume)\
    << TFLOGCOM((pAccountPositionDtl)->SettlementPrice)\
    << TFLOGCOM((pAccountPositionDtl)->PreSettlementPrice)\
    << TFLOGCOM((pAccountPositionDtl)->OpenPrice)\
    << TFLOGCOM((pAccountPositionDtl)->Margin)\
    << TFLOGCOM((pAccountPositionDtl)->MarginRate)\
    << TFLOGCOM((pAccountPositionDtl)->CloseVolume)\
    << TFLOGCOM((pAccountPositionDtl)->CloseAmount)\
    << ";"
        
#define TFLOGFEESET(pFeeSet)         "\n FeeSet:"\
    << TFLOGCOM((pFeeSet)->CompanyID)\
    << TFLOGCOM((pFeeSet)->AccountID)\
    << TFLOGSTR((pFeeSet)->ExchangeID)\
    << TFLOGSTR((pFeeSet)->InstrumentID)\
    << TFLOGCHAR((pFeeSet)->ProductClass)\
    << TFLOGSTR((pFeeSet)->ProductID)\
    << TFLOGCHAR((pFeeSet)->Direction)\
    << TFLOGCHAR((pFeeSet)->OffsetFlag)\
    << TFLOGCHAR((pFeeSet)->CoveredFlag)\
    << TFLOGCHAR((pFeeSet)->HedgeFlag)\
    << TFLOGCHAR((pFeeSet)->FeeType)\
    << TFLOGCOM((pFeeSet)->BalanceRatio)\
    << TFLOGCOM((pFeeSet)->FaceValueRatio)\
    << TFLOGCOM((pFeeSet)->AmountRatio)\
    << TFLOGCOM((pFeeSet)->MaxFee)\
    << TFLOGCOM((pFeeSet)->MinFee)\
    << TFLOGCHAR((pFeeSet)->CalculateType)\
    << TFLOGCOM((pFeeSet)->TradingDay)\
    << ";"
        
#define TFLOGMARGINRATE(pMarginRate)         "\n MarginRate:"\
    << TFLOGCOM((pMarginRate)->TradingDay)\
    << TFLOGCOM((pMarginRate)->AccountID)\
    << TFLOGCHAR((pMarginRate)->InvestorRange)\
    << TFLOGSTR((pMarginRate)->ExchangeID)\
    << TFLOGSTR((pMarginRate)->InstrumentID)\
    << TFLOGCHAR((pMarginRate)->CoveredFlag)\
    << TFLOGCHAR((pMarginRate)->HedgeFlag)\
    << TFLOGCHAR((pMarginRate)->OptionType)\
    << TFLOGCHAR((pMarginRate)->ProductClass)\
    << TFLOGSTR((pMarginRate)->ProductID)\
    << TFLOGCOM((pMarginRate)->LongMarginRatioByMoney)\
    << TFLOGCOM((pMarginRate)->LongMarginRatioByVolume)\
    << TFLOGCOM((pMarginRate)->ShortMarginRatioByMoney)\
    << TFLOGCOM((pMarginRate)->ShortMarginRatioByVolume)\
    << TFLOGCOM((pMarginRate)->IsFloat)\
    << ";"
        
#define TFLOGORDER(pOrder)         "\n Order:"\
    << TFLOGCOM((pOrder)->TradingDay)\
    << TFLOGCOM((pOrder)->AccountID)\
    << TFLOGCOM((pOrder)->ComboID)\
    << TFLOGCOM((pOrder)->SessionID)\
    << TFLOGCOM((pOrder)->FrontID)\
    << TFLOGSTR((pOrder)->OrderRef)\
    << TFLOGSTR((pOrder)->ExchangeID)\
    << TFLOGSTR((pOrder)->SeatID)\
    << TFLOGSTR((pOrder)->OrderLocalID)\
    << TFLOGCHAR((pOrder)->Direction)\
    << TFLOGCOM((pOrder)->OperatorID)\
    << TFLOGSTR((pOrder)->TradeCode)\
    << TFLOGSTR((pOrder)->BranchID)\
    << TFLOGSTR((pOrder)->InstrumentID)\
    << TFLOGCHAR((pOrder)->OrderPriceType)\
    << TFLOGSTR((pOrder)->CombOffsetFlag)\
    << TFLOGSTR((pOrder)->CombHedgeFlag)\
    << TFLOGCHAR((pOrder)->CoveredFlag)\
    << TFLOGCOM((pOrder)->LimitPrice)\
    << TFLOGCOM((pOrder)->VolumeTotalOriginal)\
    << TFLOGCHAR((pOrder)->TimeCondition)\
    << TFLOGCHAR((pOrder)->VolumeCondition)\
    << TFLOGCOM((pOrder)->MinVolume)\
    << TFLOGCHAR((pOrder)->ContingentCondition)\
    << TFLOGCOM((pOrder)->StopPrice)\
    << TFLOGCOM((pOrder)->ORRequestID)\
    << TFLOGSTR((pOrder)->OrderSysID)\
    << TFLOGCHAR((pOrder)->OrderStatus)\
    << TFLOGCHAR((pOrder)->OrderType)\
    << TFLOGCOM((pOrder)->VolumeTraded)\
    << TFLOGCOM((pOrder)->AmountTraded)\
    << TFLOGCOM((pOrder)->VolumeRemain)\
    << TFLOGCOM((pOrder)->InsertDate)\
    << TFLOGCOM((pOrder)->InsertTime)\
    << TFLOGCOM((pOrder)->UpdateTime)\
    << TFLOGCOM((pOrder)->CancelTime)\
    << TFLOGSTR((pOrder)->OrderActionRef)\
    << TFLOGSTR((pOrder)->StatusMsg)\
    << TFLOGCHAR((pOrder)->OwnerType)\
    << TFLOGSTR((pOrder)->ThirdReff1)\
    << TFLOGSTR((pOrder)->ThirdReff2)\
    << TFLOGCOM((pOrder)->VolumeCanceled)\
    << TFLOGSTR((pOrder)->Remark)\
    << TFLOGCHAR((pOrder)->CancelFlag)\
    << TFLOGSTR((pOrder)->OrderIP)\
    << TFLOGSTR((pOrder)->OrderMAC)\
    << TFLOGSTR((pOrder)->OrderHDNum)\
    << TFLOGSTR((pOrder)->OrderMacCode)\
    << TFLOGSTR((pOrder)->OrderOS)\
    << TFLOGCOM((pOrder)->Balance)\
    << TFLOGCOM((pOrder)->Commission)\
    << TFLOGCHAR((pOrder)->SubProductClass)\
    << ";"
        
#define TFLOGTRADE(pTrade)         "\n Trade:"\
    << TFLOGCOM((pTrade)->TradingDay)\
    << TFLOGCOM((pTrade)->AccountID)\
    << TFLOGCOM((pTrade)->ComboID)\
    << TFLOGSTR((pTrade)->ExchangeID)\
    << TFLOGSTR((pTrade)->TradeID)\
    << TFLOGCHAR((pTrade)->Direction)\
    << TFLOGSTR((pTrade)->TradeCode)\
    << TFLOGSTR((pTrade)->SeatID)\
    << TFLOGSTR((pTrade)->BranchID)\
    << TFLOGSTR((pTrade)->InstrumentCode)\
    << TFLOGSTR((pTrade)->InstrumentID)\
    << TFLOGCOM((pTrade)->OperatorID)\
    << TFLOGCOM((pTrade)->ORRequestID)\
    << TFLOGSTR((pTrade)->OrderSysID)\
    << TFLOGSTR((pTrade)->OrderLocalID)\
    << TFLOGSTR((pTrade)->OrderRef)\
    << TFLOGCHAR((pTrade)->OffsetFlag)\
    << TFLOGCHAR((pTrade)->CoveredFlag)\
    << TFLOGCHAR((pTrade)->HedgeFlag)\
    << TFLOGCOM((pTrade)->Price)\
    << TFLOGCOM((pTrade)->Volume)\
    << TFLOGCOM((pTrade)->TradeAmount)\
    << TFLOGCOM((pTrade)->TradeDate)\
    << TFLOGCOM((pTrade)->TradeTime)\
    << TFLOGCOM((pTrade)->Commission)\
    << TFLOGCOM((pTrade)->SequenceNo)\
    << TFLOGCHAR((pTrade)->OwnerType)\
    << TFLOGCHAR((pTrade)->SubProductClass)\
    << ";"
        
#define TFLOGRISKRULE(pRiskRule)         "\n RiskRule:"\
    << TFLOGCOM((pRiskRule)->TradingDay)\
    << TFLOGCOM((pRiskRule)->RiskId)\
    << TFLOGSTR((pRiskRule)->RuleCode)\
    << TFLOGCOM((pRiskRule)->CompanyID)\
    << TFLOGSTR((pRiskRule)->ExchangeID)\
    << TFLOGSTR((pRiskRule)->InstrumentIDs)\
    << TFLOGCHAR((pRiskRule)->InstrumentControlLevel)\
    << TFLOGCHAR((pRiskRule)->InstrumentRangeType)\
    << TFLOGBOOL((pRiskRule)->InstrumentUnionFlag)\
    << TFLOGSTR((pRiskRule)->AccountIDs)\
    << TFLOGCHAR((pRiskRule)->AccountControlLevel)\
    << TFLOGCHAR((pRiskRule)->AccountRangeType)\
    << TFLOGBOOL((pRiskRule)->AccountUnionFlag)\
    << TFLOGSTR((pRiskRule)->RuleName)\
    << TFLOGCOM((pRiskRule)->IsActive)\
    << TFLOGSTR((pRiskRule)->Value)\
    << ";"
        
#define TFLOGRISKRULELOG(pRiskRuleLog)         "\n RiskRuleLog:"\
    << TFLOGCOM((pRiskRuleLog)->TradingDay)\
    << TFLOGCOM((pRiskRuleLog)->SequenceNo)\
    << TFLOGCOM((pRiskRuleLog)->CompanyID)\
    << TFLOGCOM((pRiskRuleLog)->ExecuteTime)\
    << TFLOGCOM((pRiskRuleLog)->RiskId)\
    << TFLOGSTR((pRiskRuleLog)->RuleCode)\
    << TFLOGSTR((pRiskRuleLog)->RuleName)\
    << TFLOGSTR((pRiskRuleLog)->ExchangeID)\
    << TFLOGSTR((pRiskRuleLog)->InstrumentIDs)\
    << TFLOGCOM((pRiskRuleLog)->AccountID)\
    << TFLOGSTR((pRiskRuleLog)->OrderRef)\
    << TFLOGCOM((pRiskRuleLog)->Threshold)\
    << TFLOGCOM((pRiskRuleLog)->CalcValue)\
    << TFLOGSTR((pRiskRuleLog)->ErrorMsg)\
    << ";"
        
#define TFLOGADMINCOMMAND(pAdminCommand)         "\n AdminCommand:"\
    << TFLOGCOM((pAdminCommand)->TradingDay)\
    << TFLOGCOM((pAdminCommand)->SequenceNo)\
    << TFLOGCOM((pAdminCommand)->OperatorID)\
    << TFLOGSTR((pAdminCommand)->AdminCode)\
    << TFLOGSTR((pAdminCommand)->Value)\
    << TFLOGCOM((pAdminCommand)->ErrorID)\
    << TFLOGSTR((pAdminCommand)->ErrorMsg)\
    << ";"
        
#define TFLOGOPERATIONLOG(pOperationLog)         "\n OperationLog:"\
    << TFLOGCOM((pOperationLog)->TradingDay)\
    << TFLOGCOM((pOperationLog)->OperatorID)\
    << TFLOGCOM((pOperationLog)->InvestorID)\
    << TFLOGCOM((pOperationLog)->ExecuteTime)\
    << TFLOGSTR((pOperationLog)->AdminCode)\
    << TFLOGSTR((pOperationLog)->Value)\
    << TFLOGCOM((pOperationLog)->ErrorID)\
    << TFLOGSTR((pOperationLog)->ErrorMsg)\
    << ";"
        
#define TFLOGPOSCHANGELOG(pPosChangeLog)         "\n PosChangeLog:"\
    << TFLOGCOM((pPosChangeLog)->TradingDay)\
    << TFLOGCOM((pPosChangeLog)->OperatorID)\
    << TFLOGCHAR((pPosChangeLog)->OperationType)\
    << TFLOGCHAR((pPosChangeLog)->ChangeType)\
    << TFLOGCOM((pPosChangeLog)->AccountID)\
    << TFLOGCOM((pPosChangeLog)->ComboID)\
    << TFLOGSTR((pPosChangeLog)->InstrumentID)\
    << TFLOGSTR((pPosChangeLog)->ExchangeID)\
    << TFLOGCHAR((pPosChangeLog)->CoveredFlag)\
    << TFLOGCHAR((pPosChangeLog)->PosiDirection)\
    << TFLOGCHAR((pPosChangeLog)->HedgeFlag)\
    << TFLOGCOM((pPosChangeLog)->ExecuteTime)\
    << TFLOGCOM((pPosChangeLog)->OriginValue)\
    << TFLOGCOM((pPosChangeLog)->NewValue)\
    << TFLOGSTR((pPosChangeLog)->Memo)\
    << ";"
        
#define TFLOGACTCHANGELOG(pActChangeLog)         "\n ActChangeLog:"\
    << TFLOGCOM((pActChangeLog)->TradingDay)\
    << TFLOGCOM((pActChangeLog)->OperatorID)\
    << TFLOGCHAR((pActChangeLog)->OperationType)\
    << TFLOGCHAR((pActChangeLog)->ChangeType)\
    << TFLOGCOM((pActChangeLog)->AccountID)\
    << TFLOGCOM((pActChangeLog)->ExecuteTime)\
    << TFLOGCOM((pActChangeLog)->OriginValue)\
    << TFLOGCOM((pActChangeLog)->NewValue)\
    << TFLOGSTR((pActChangeLog)->Memo)\
    << ";"
        
#define TFLOGRSPINFO(pRspInfo)         "\n RspInfo:"\
    << TFLOGCOM((pRspInfo)->ErrorID)\
    << TFLOGCOM((pRspInfo)->IsLast)\
    << TFLOGSTR((pRspInfo)->ErrorMsg)\
    << ";"
        
#define TFLOGUSERLOGINREQ(pUserLoginReq)         "\n UserLoginReq:"\
    << TFLOGCOM((pUserLoginReq)->OperatorID)\
    << TFLOGSTR((pUserLoginReq)->Password)\
    << TFLOGSTR((pUserLoginReq)->FeatureToken)\
    << ";"
        
#define TFLOGLOGINREQ(pLoginReq)         "\n LoginReq:"\
    << TFLOGCOM((pLoginReq)->OperatorID)\
    << TFLOGSTR((pLoginReq)->Password)\
    << TFLOGSTR((pLoginReq)->OrderIP)\
    << TFLOGSTR((pLoginReq)->OrderMAC)\
    << TFLOGSTR((pLoginReq)->OrderHDNum)\
    << TFLOGSTR((pLoginReq)->OrderMacCode)\
    << TFLOGSTR((pLoginReq)->OrderOS)\
    << TFLOGSTR((pLoginReq)->FeatureToken)\
    << ";"
        
#define TFLOGLOGOUTREQ(pLogoutReq)         "\n LogoutReq:"\
    << TFLOGCOM((pLogoutReq)->OperatorID)\
    << ";"
        
#define TFLOGRSPLOGIN(pRspLogin)         "\n RspLogin:"\
    << TFLOGCOM((pRspLogin)->TradingDay)\
    << TFLOGCOM((pRspLogin)->LoginTime)\
    << TFLOGCOM((pRspLogin)->OperatorID)\
    << TFLOGCOM((pRspLogin)->FrontID)\
    << TFLOGCOM((pRspLogin)->SessionID)\
    << TFLOGCOM((pRspLogin)->MaxOrderRef)\
    << ";"
        
#define TFLOGORDERREQ(pOrderReq)         "\n OrderReq:"\
    << TFLOGCOM((pOrderReq)->AccountID)\
    << TFLOGCOM((pOrderReq)->OperatorID)\
    << TFLOGCOM((pOrderReq)->ComboID)\
    << TFLOGSTR((pOrderReq)->InstrumentID)\
    << TFLOGSTR((pOrderReq)->OrderRef)\
    << TFLOGSTR((pOrderReq)->ExchangeID)\
    << TFLOGCHAR((pOrderReq)->OrderPriceType)\
    << TFLOGCHAR((pOrderReq)->Direction)\
    << TFLOGSTR((pOrderReq)->CombOffsetFlag)\
    << TFLOGSTR((pOrderReq)->CombHedgeFlag)\
    << TFLOGCHAR((pOrderReq)->CoveredFlag)\
    << TFLOGCOM((pOrderReq)->LimitPrice)\
    << TFLOGCOM((pOrderReq)->VolumeTotalOriginal)\
    << TFLOGCHAR((pOrderReq)->TimeCondition)\
    << TFLOGCHAR((pOrderReq)->VolumeCondition)\
    << TFLOGSTR((pOrderReq)->ThirdReff1)\
    << TFLOGSTR((pOrderReq)->ThirdReff2)\
    << TFLOGSTR((pOrderReq)->OrderIP)\
    << TFLOGSTR((pOrderReq)->OrderMAC)\
    << TFLOGSTR((pOrderReq)->OrderHDNum)\
    << TFLOGSTR((pOrderReq)->OrderMacCode)\
    << TFLOGSTR((pOrderReq)->OrderOS)\
    << ";"
        
#define TFLOGORDERCANCELREQ(pOrderCancelReq)         "\n OrderCancelReq:"\
    << TFLOGCOM((pOrderCancelReq)->AccountID)\
    << TFLOGCOM((pOrderCancelReq)->OperatorID)\
    << TFLOGCOM((pOrderCancelReq)->ComboID)\
    << TFLOGSTR((pOrderCancelReq)->OrderActionRef)\
    << TFLOGSTR((pOrderCancelReq)->OrderLocalID)\
    << TFLOGSTR((pOrderCancelReq)->OrderIP)\
    << TFLOGSTR((pOrderCancelReq)->OrderMAC)\
    << TFLOGSTR((pOrderCancelReq)->OrderHDNum)\
    << TFLOGSTR((pOrderCancelReq)->OrderMacCode)\
    << TFLOGSTR((pOrderCancelReq)->OrderOS)\
    << ";"
        
#define TFLOGQRYRISKRULE(pQryRiskRule)         "\n QryRiskRule:"\
    << TFLOGCOM((pQryRiskRule)->RiskId)\
    << TFLOGSTR((pQryRiskRule)->RuleCode)\
    << ";"
        
#define TFLOGQRYINSTRUMENT(pQryInstrument)         "\n QryInstrument:"\
    << TFLOGSTR((pQryInstrument)->ExchangeID)\
    << TFLOGSTR((pQryInstrument)->InstrumentID)\
    << ";"
        
#define TFLOGQRYCOMMISSIONRATE(pQryCommissionRate)         "\n QryCommissionRate:"\
    << TFLOGCOM((pQryCommissionRate)->AccountID)\
    << TFLOGSTR((pQryCommissionRate)->ExchangeID)\
    << TFLOGSTR((pQryCommissionRate)->InstrumentID)\
    << TFLOGCHAR((pQryCommissionRate)->Direction)\
    << TFLOGCHAR((pQryCommissionRate)->OffsetFlag)\
    << TFLOGCHAR((pQryCommissionRate)->CoveredFlag)\
    << TFLOGCHAR((pQryCommissionRate)->HedgeFlag)\
    << ";"
        
#define TFLOGQRYMARGINRATE(pQryMarginRate)         "\n QryMarginRate:"\
    << TFLOGCOM((pQryMarginRate)->AccountID)\
    << TFLOGSTR((pQryMarginRate)->ExchangeID)\
    << TFLOGSTR((pQryMarginRate)->InstrumentID)\
    << TFLOGCHAR((pQryMarginRate)->CoveredFlag)\
    << TFLOGCHAR((pQryMarginRate)->HedgeFlag)\
    << ";"
        
#define TFLOGQRYORDER(pQryOrder)         "\n QryOrder:"\
    << TFLOGCOM((pQryOrder)->AccountID)\
    << TFLOGCOM((pQryOrder)->ComboID)\
    << TFLOGSTR((pQryOrder)->ExchangeID)\
    << TFLOGSTR((pQryOrder)->InstrumentID)\
    << TFLOGSTR((pQryOrder)->OrderLocalID)\
    << ";"
        
#define TFLOGQRYTRADE(pQryTrade)         "\n QryTrade:"\
    << TFLOGCOM((pQryTrade)->AccountID)\
    << TFLOGCOM((pQryTrade)->ComboID)\
    << TFLOGSTR((pQryTrade)->ExchangeID)\
    << TFLOGSTR((pQryTrade)->InstrumentID)\
    << TFLOGSTR((pQryTrade)->TradeID)\
    << TFLOGSTR((pQryTrade)->OrderLocalID)\
    << ";"
        
#define TFLOGQRYACCOUNTASSET(pQryAccountAsset)         "\n QryAccountAsset:"\
    << TFLOGCOM((pQryAccountAsset)->AccountID)\
    << ";"
        
#define TFLOGQRYACCOUNT(pQryAccount)         "\n QryAccount:"\
    << TFLOGCOM((pQryAccount)->AccountID)\
    << TFLOGCHAR((pQryAccount)->QryAccountType)\
    << ";"
        
#define TFLOGQRYPOSITION(pQryPosition)         "\n QryPosition:"\
    << TFLOGCOM((pQryPosition)->AccountID)\
    << TFLOGCOM((pQryPosition)->ComboID)\
    << TFLOGSTR((pQryPosition)->ExchangeID)\
    << TFLOGSTR((pQryPosition)->InstrumentID)\
    << ";"
        
#define TFLOGQRYCOMBO(pQryCombo)         "\n QryCombo:"\
    << TFLOGCOM((pQryCombo)->AccountID)\
    << TFLOGCOM((pQryCombo)->ComboID)\
    << ";"
        
#define TFLOGTERMINALFEATURECODE(pTerminalFeatureCode)         "\n TerminalFeatureCode:"\
    << TFLOGSTR((pTerminalFeatureCode)->TerminalVeresion)\
    << TFLOGSTR((pTerminalFeatureCode)->FeatureCode)\
    << TFLOGCOM((pTerminalFeatureCode)->CompanyID)\
    << TFLOGSTR((pTerminalFeatureCode)->ProgramName)\
    << ";"
        
#define TFLOGSYSTEMCONFIG(pSystemConfig)         "\n SystemConfig:"\
    << TFLOGSTR((pSystemConfig)->SystemConfigKey)\
    << TFLOGSTR((pSystemConfig)->SystemConfigName)\
    << TFLOGSTR((pSystemConfig)->SystemConfigType)\
    << TFLOGSTR((pSystemConfig)->SystemConfigValue)\
    << TFLOGCOM((pSystemConfig)->SystemConfigOrder)\
    << ";"
        
#define TFLOGTRADECALENDAR(pTradeCalendar)         "\n TradeCalendar:"\
    << TFLOGSTR((pTradeCalendar)->ExchangeID)\
    << TFLOGCOM((pTradeCalendar)->TradeDate)\
    << TFLOGCOM((pTradeCalendar)->LastTradeDate)\
    << ";"
        
#define TFLOGIPOINSTRUMENT(pIpoInstrument)         "\n IpoInstrument:"\
    << TFLOGSTR((pIpoInstrument)->ExchangeID)\
    << TFLOGSTR((pIpoInstrument)->InstrumentName)\
    << TFLOGCOM((pIpoInstrument)->IpoPrice)\
    << TFLOGSTR((pIpoInstrument)->InstrumentID)\
    << TFLOGCOM((pIpoInstrument)->IssueVolume)\
    << TFLOGCOM((pIpoInstrument)->MinVolume)\
    << TFLOGCOM((pIpoInstrument)->MaxVolume)\
    << TFLOGCOM((pIpoInstrument)->SubDate)\
    << TFLOGCOM((pIpoInstrument)->FundVerificationDate)\
    << TFLOGCOM((pIpoInstrument)->PaymentDate)\
    << TFLOGCHAR((pIpoInstrument)->ProductClass)\
    << TFLOGCHAR((pIpoInstrument)->SubProductClass)\
    << ";"
        
#define TFLOGIPOLIMIT(pIpoLimit)         "\n IpoLimit:"\
    << TFLOGCOM((pIpoLimit)->AccountID)\
    << TFLOGCOM((pIpoLimit)->InvestorID)\
    << TFLOGSTR((pIpoLimit)->AccountCode)\
    << TFLOGSTR((pIpoLimit)->ExchangeID)\
    << TFLOGCOM((pIpoLimit)->LimitVolume)\
    << TFLOGCOM((pIpoLimit)->LimitKC)\
    << ";"
        
#define TFLOGQRYIPOINSTRUMENT(pQryIpoInstrument)         "\n QryIpoInstrument:"\
    << TFLOGSTR((pQryIpoInstrument)->ExchangeID)\
    << TFLOGSTR((pQryIpoInstrument)->InstrumentID)\
    << ";"
        
#define TFLOGQRYIPOLIMIT(pQryIpoLimit)         "\n QryIpoLimit:"\
    << TFLOGCOM((pQryIpoLimit)->AccountID)\
    << TFLOGSTR((pQryIpoLimit)->ExchangeID)\
    << ";"
        
#define TFLOGLOGINLOG(pLoginLog)         "\n LoginLog:"\
    << TFLOGCOM((pLoginLog)->TradingDay)\
    << TFLOGCOM((pLoginLog)->OperatorID)\
    << TFLOGCOM((pLoginLog)->SessionID)\
    << TFLOGCHAR((pLoginLog)->LoginType)\
    << TFLOGCHAR((pLoginLog)->LoginFrom)\
    << TFLOGSTR((pLoginLog)->OrderIP)\
    << TFLOGSTR((pLoginLog)->OrderMAC)\
    << TFLOGSTR((pLoginLog)->OrderHDNum)\
    << TFLOGSTR((pLoginLog)->OrderMacCode)\
    << TFLOGSTR((pLoginLog)->OrderOS)\
    << TFLOGSTR((pLoginLog)->FeatureToken)\
    << TFLOGCOM((pLoginLog)->CreateTime)\
    << ";"
        
#endif
  