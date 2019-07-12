CXX=g++
CFLAGS=-std=c++11 -Wl,-rpath=../../../api/TFTradeApi/uat/lib/linux  -I. -I ../../../api/TFTradeApi/uat/include -L ../../../api/TFTradeApi/uat/lib/linux

query: query.cc query.h
	$(CXX) $(CFLAGS) -o query query.cc -lTFTradeApi -lpthread