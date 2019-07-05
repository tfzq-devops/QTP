.PHONY: all

all: hello-world \
     query-account-asset \
     query-account-position

hello-world: ./hello_world/trade.cc ./hello_world/trade.h
	cd ./hello_world && make

query-account-asset: ./query_account_asset/query.cc ./query_account_asset/query.h
	cd ./query_account_asset && make

query-account-position: ./query_account_position/query.cc ./query_account_position/query.h
	cd ./query_account_position && make