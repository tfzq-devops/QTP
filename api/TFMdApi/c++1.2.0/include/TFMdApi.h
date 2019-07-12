#pragma once

#include <vector>
#include "TFUserApiStruct.h"

#if defined(_WIN32)

#ifdef DLL_MarketDataApiExport
#define DLL_MarketDataAPI __declspec(dllexport)
#else
#define DLL_MarketDataAPI __declspec(dllimport)
#endif

#else

#define DLL_MarketDataAPI __attribute__ ((visibility("default")))

#endif

class TFMarketDataSPI
{
public:
	//客户端与后台建立连接后，该方法被调用
	virtual void onConnect(){};

	//客户端与后台断开连接后，该方法被调用
	virtual void onDisConnect(TFErrorInfoField* errorID){};

	//代码表准备就绪
	virtual void onCodeTableReady(TFErrorInfoField* errorID) {};

	//心跳超时警告。当长时间未收到报文时，该方法被调用。
	//@param timeLapse 距离上次接收报文的时间
	virtual void onHeartBeatWarning(int timeLapse){};

	//用户登录应答
	virtual void onRspLogin(TFErrorInfoField* errorID, int sessionID) {};


	//用户登出应答
	virtual void onRspLogout(TFErrorInfoField* errorID, int sessionID){};

	///错误应答
	virtual void onRspError(TFErrorInfoField* errorID, int sessionID) {};

	//订阅合约应答
	virtual void onRspSubMarketData(const TFQuoteSubField* quote, TFErrorInfoField* errorID, int sessionID){};

	//退订合约应答
	virtual void onRspUnSubMarketData(const TFQuoteSubField* quote, TFErrorInfoField* errorID, int sessionID){};

	//深度行情应答
	//@param isLast 只用于历史行情的单个合约结束标志
	virtual void onRtnDepthMarketData(const TFQuoteType dataType, const void* data, bool isLast = true) {};

};

class DLL_MarketDataAPI TFMarketDataAPI
{
public:
	//创建MarketDataApi
	//@return 创建出的UserApi
	static TFMarketDataAPI *createMarketDataApi(TFMDPType serverType, const char *initPath = "");
	virtual void subscribeMarketDataTopic(TFMDPSubscribeMode subscribemode) = 0;

	//获取API的版本信息
	//@retrun 获取到的版本号
	virtual const char * getApiVersion() = 0;

	//注册回调接口
	//@param pSpi 派生自回调接口类的实例
	virtual void registerSpi(TFMarketDataSPI *spi) = 0;

	//删除接口对象本身
	//@remark 不再使用本接口对象时,调用该函数删除接口对象
	virtual void release() = 0;

	//初始化
	//@remark 初始化运行环境,只有调用后,接口才开始工作
	virtual bool init() = 0;

	///等待接口线程结束运行
	///@return 线程退出代码
	virtual int join() = 0;

	//获取指定市场代码表
	virtual bool getCodeTable(TFCodeKeyField* reqCodeKey, TFCodeInfoField ** rspCodeinfo, int* num) = 0;

	//系统用户登录请求
	virtual void reqLogin(TFLoginInfoField* reqLoginItem, int sessionID) = 0;

	//系统用户登出请求
	virtual void reqLogout(TFLoginInfoField* reqLoginItem, int sessionID) = 0;

	//行情订阅请求
	virtual void subscribeQuote(TFQuoteSubField* item, int num) = 0;

	//行情退订请求
	virtual void unSubscribeQuote(TFQuoteSubField* item, int num) = 0;

protected:
	~TFMarketDataAPI(){};
};
