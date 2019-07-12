CXX=g++
CFLAGS=-std=c++11 -Wl,-rpath=../../../api/TFTradeApi/uat/lib/linux  -I. -I ../../../api/TFTradeApi/uat/include -L ../../../api/TFTradeApi/uat/lib/linux

trade: trade.cc trade.h
	$(CXX) $(CFLAGS) -o trade trade.cc -lTFTradeApi -lpthread