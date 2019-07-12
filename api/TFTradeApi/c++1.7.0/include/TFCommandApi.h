#ifndef TF_CMD_API_H
#define TF_CMD_API_H
#include "TFDataStruct.h"
#ifdef WIN32
#ifdef _API_IMPORT
#define CMD_API_EXPORT __declspec(dllexport)
#else
#define CMD_API_EXPORT __declspec(dllimport)
#endif
#else
#define CMD_API_EXPORT __attribute__ ((visibility("default")))
#endif
namespace tfzq{
    namespace stp{
		class TFCommandSpi;
        class CMD_API_EXPORT TFCommandApi
        {
        public:
            ///构造函数，创建UserApi类对象
            static TFCommandApi *createTFCmdApi(const char *pszFlowPath, char providerType);
            ///删除接口对象本身
            ///@remark 不再使用本接口对象时,调用该函数删除接口对象
            virtual void release() = 0;
            ///初始化函数
            //ret -1: 初始化失败
            //ret -2: 配置文件解析失败
            //ret -3: 内部数据初始化异常
            virtual int init() = 0;
            ///注册SPI对象
            virtual void registerSpi(TFCommandSpi *pSpi) = 0;
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
            /// 设置命令接口定义
            /////////////////////////////////////////////////////////////////////////////////
            /// 请求command
			virtual int sendCommand(TFAdminCommandField *pCmd) = 0;
			///请求查询风控Rule
			virtual int qryRiskRule(TFQryRiskRuleField *qryRiskRule) = 0;
        protected:
            virtual ~TFCommandApi(){};
        };
        class TFCommandSpi
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
            /////////////////////////////////////////////////////////////////////////////////
            /// 查询接口定义
            /////////////////////////////////////////////////////////////////////////////////
			///请求Command响应
			virtual void onCommandSend(TFAdminCommandField *pCmd, TFRspInfoField *pRspInfo) {};
			///command通知
			virtual void onRtnCommand(TFAdminCommandField *pOrder) {};
			///请求查询风控规则响应
			virtual void onQryRiskRule(TFRiskRuleField  *riskRule, TFRspInfoField *pRspInfo) {};
        };
    }
}
#endif