CXX=g++
CFLAGS=-std=c++11 -Wl,-rpath=../../../api/c++-1.7.0/lib/linux  -I. -I ../../../api/c++-1.7.0/include -L ../../../api/c++-1.7.0/lib/linux


query: query.cc query.h
	$(CXX) $(CFLAGS) -o query query.cc -lTFTradeApi -lpthread