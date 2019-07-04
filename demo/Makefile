.PHONY: all

all: hello_world query_account_asset

hello_world: ./linux/hello_world/trade.cc ./linux/hello_world/trade.h
	cd ./linux/hello_world && make

query_account_asset: ./linux/query_account_asset/query.cc ./linux/query_account_asset/query.h
	cd ./linux/query_account_asset && make