#ifndef TF_TRADE_API_H
#define TF_TRADE_API_H
#include "TFDataStruct.h"
#ifdef WIN32
#ifdef _API_IMPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT __attribute__ ((visibility("default")))
#endif
namespace tfzq{
    namespace stp{
		class TFTradeSpi;
        class TRADER_API_EXPORT TFTradeApi
        {
        public:
            ///构造函数，创建UserApi类对象
			static TFTradeApi *createTFTradeApi(const char *pszFlowPath, char providerType);
            ///删除接口对象本身
            ///@remark 不再使用本接口对象时,调用该函数删除接口对象
            virtual void release() = 0;
            ///初始化函数
            //ret -1: 初始化失败
            //ret -2: 配置文件解析失败
            //ret -3: 内部数据初始化异常
            virtual int init() = 0;
            ///注册SPI对象
            virtual void registerSpi(TFTradeSpi *pSpi) = 0;
            ///订阅私有流。
            ///@param nResumeType 私有流重传方式  
            ///              TERT_RESTART:从本交易日开始重传
            ///              TERT_RESUME:从上次收到的续传 
            ///              TERT_QUICK:只传送登录后私有流的内容
            ///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
            virtual void subscribePrivateTopic(TF_RESUME_TYPE nResumeType) = 0;
            ///注册前置机网络地址
            ///@param pszFrontAddress：前置机网络地址。
            ///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
            ///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
            virtual void registerFront(const char *pszFrontAddress) = 0;
            ///用户登录请求
            virtual int login(TFUserLoginReqField *pLogin) = 0;
            ///登出请求
            virtual int logout() = 0;
            ///报单录入请求
			virtual int sendOrder(TFOrderReqField *pOrder) = 0;
            ///报单操作请求
			virtual int cancelOrder(TFOrderCancelReqField *pOrderCancel) = 0;

       	protected:
            virtual ~TFTradeApi(){};
        };

		class TRADER_API_EXPORT TFHelperApi
		{
		public:
			static TFLoginReqField getLoginInfo();
		};
		
    	class TFTradeSpi
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
            ///报单通知
			virtual void onRtnOrder(TFOrderField *pOrder) {};
            ///成交通知
			virtual void onRtnTrade(TFTradeField *pTrade) {};
            ///报单错误回复（会话）
			virtual void onOrderSend(TFOrderReqField *pOrderReq, TFRspInfoField *pRspInfo) {};
            ///撤单错误回复（会话）
			virtual void onOrderCancel(TFOrderCancelReqField *pOrderCancelReq, TFRspInfoField *pRspInfo) {};
            ///报单错误回报
			virtual void onErrRtnOrderSend(TFOrderReqField *pInputOrder, TFRspInfoField *pRspInfo) {};
            ///撤单错误回报
			virtual void onErrRtnOrderCancel(TFOrderCancelReqField *pOrderAction, TFRspInfoField *pRspInfo) {};
			///持仓推送
			virtual void onRtnPositionChanged(TFUserComboPositionField *pPosition) {};
			
        };
    }
}
#endif