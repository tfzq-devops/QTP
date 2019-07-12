#ifndef TF_QUERY_API_H
#define TF_QUERY_API_H
#include "TFDataStruct.h"
#ifdef WIN32
#ifdef _API_IMPORT
#define QUERY_API_EXPORT __declspec(dllexport)
#else
#define QUERY_API_EXPORT __declspec(dllimport)
#endif
#else
#define QUERY_API_EXPORT __attribute__ ((visibility("default")))
#endif
namespace tfzq{
    namespace stp{
        class TFQuerySpi;
        class QUERY_API_EXPORT TFQueryApi
        {
        public:
            ///构造函数，创建UserApi类对象
            static TFQueryApi *createTFQueryApi(const char *pszFlowPath, char providerType);
            ///删除接口对象本身
            ///@remark 不再使用本接口对象时,调用该函数删除接口对象
            virtual void release() = 0;
            ///初始化函数
            //ret -1: 初始化失败
            //ret -2: 配置文件解析失败
            //ret -3: 内部数据初始化异常
            virtual int init() = 0;
            ///注册SPI对象
            virtual void registerSpi(TFQuerySpi *pSpi) = 0;
            ///注册前置机网络地址
            ///@param pszFrontAddress：前置机网络地址。
            ///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
            ///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
            virtual void registerFront(const char *pszFrontAddress) = 0;
            ///用户登录请求
            //ret  0: 成功
            //ret -1: 未建立连接
            //ret -2: 传入参数解析失败
            //ret <0的其他值 : 其他未知错误
			virtual int login(TFUserLoginReqField *pLogin) = 0;
            ///登出请求
            virtual int logout() = 0;
            /////////////////////////////////////////////////////////////////////////////////
            /// 查询接口定义
            /////////////////////////////////////////////////////////////////////////////////
            ///请求查询合约
			virtual int qryInstrument(TFQryInstrumentField *qryInstrument) = 0;
			///请求查询账户信息
			virtual int qryAccount(TFQryAccountField *qryAccount) = 0;
            ///请求查询资金账户
			virtual int qryAccountAsset(TFQryAccountAssetField *qryAccountAsset) = 0;
            ///请求查询投资者持仓
			virtual int qryPosition(TFQryPositionField *qryPosition) = 0;
            ///请求查询保证金率(期货适用）
            virtual int qryMarginRate(TFQryMarginRateField *qryMarginRate) = 0;
            ///请求查询手续费率(期货适用）
            //virtual int qryCommissionRate(TFQryCommissionRateField *qryCommissionRate) = 0;
            ///请求查询报单
			virtual int qryOrder(TFQryOrderField *qryOrder) = 0;
            ///请求查询成交
			virtual int qryTrade(TFQryTradeField *qryTrade) = 0;
			///请求combo组合
			virtual int qryCombo(TFQryComboField *qryCombo) = 0;
			///请求查询新股申购合约
			virtual int qryIpoInstrument(TFQryIpoInstrumentField *qryIpoInstrument) = 0;
			///请求查询新股申购额度
			virtual int qryIpoLimit(TFQryIpoLimitField *qryIpoLimit) = 0;

		protected:
            virtual ~TFQueryApi(){};
        };

        class TFQuerySpi
        {
        public:
            ///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
            virtual void onConnected(){};
            //登录请求响应
			virtual void onLogin(TFRspLoginField *pRspLogin, TFRspInfoField *pRspInfo){};
            //注销请求响应
			virtual void onLogout(TFRspInfoField *pRspInfo) {};
            ///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
            virtual void onDisconnected(int nReason){};
            ///错误应答
			virtual void onError(TFRspInfoField *pRspInfo) {};
            /////////////////////////////////////////////////////////////////////////////////
            /// 查询接口定义
            /////////////////////////////////////////////////////////////////////////////////
            ///请求查询合约响应
			virtual void onQryInstrument(TFInstrumentField  *pInstrument, TFRspInfoField *pRspInfo) {};
			///请求查询账户信息响应
			virtual void onQryAccount(TFAccountField *pAccount, TFRspInfoField *pRspInfo){};
            ///请求查询资金账户响应
			virtual void onQryAccountAsset(TFUserAccountAssetField *pAccount, TFRspInfoField *pRspInfo) {};
            ///请求查询投资者持仓响应
			virtual void onQryPosition(TFUserComboPositionField *pPosition, TFRspInfoField *pRspInfo) {};
            ///请求查询保证金率响应(期货适用）
            virtual void onQryMarginRate(TFMarginRateField *pMarginRate, TFRspInfoField *pRspInfo) {};
            ///请求查询手续费率响应(期货适用）
            virtual void onQryCommissionRate(TFFeeSetField *pCommissionRate, TFRspInfoField *pRspInfo) {};
            ///请求查询报单响应
			virtual void onQryOrder(TFOrderField *pOrder, TFRspInfoField *pRspInfo) {};
            ///请求查询成交响应
			virtual void onQryTrade(TFTradeField *pTrade, TFRspInfoField *pRspInfo) {};
			///请求查询combo响应
			virtual void onQryCombo(TFAccountComboField *pCombo, TFRspInfoField *pRspInfo) {};
			///请求查询合约响应
			virtual void onQryIpoInstrument(TFIpoInstrumentField  *pIpoInstrument, TFRspInfoField *pRspInfo) {};
			///请求查询合约响应
			virtual void onQryIpoLimit(TFIpoLimitField  *pIpoLimit, TFRspInfoField *pRspInfo) {};
        };
    }
}
#endif