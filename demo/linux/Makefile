.PHONY: all

all: hello_world \
     query_account_asset \
     query_account_position

hello_world: ./hello_world/trade.cc ./hello_world/trade.h
	cd ./hello_world && make

query_account_asset: ./query_account_asset/query.cc ./query_account_asset/query.h
	cd ./query_account_asset && make

query_account_position: ./query_account_position/query.cc ./query_account_position/query.h
	cd ./query_account_position && make