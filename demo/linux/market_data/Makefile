CXX=g++
CFLAGS=-std=c++11 -Wl,-rpath=../../../api/TFMdApi/uat/lib/linux  -I. -I ../../../api/TFMdApi/uat/include -L ../../../api/TFMdApi/uat/lib/linux

market_data: market_data.cc market_data.h
	$(CXX) $(CFLAGS) -o market_data market_data.cc -lTFMdAPI -lpthread