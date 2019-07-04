CXX=g++
CFLAGS=-std=c++11 -Wl,-rpath=../../../api/c++-1.7.0/lib/linux  -I. -I ../../../api/c++-1.7.0/include -L ../../../api/c++-1.7.0/lib/linux


trade: trade.cc trade.h
	$(CXX) $(CFLAGS) -o trade trade.cc -lTFTradeApi -lpthread