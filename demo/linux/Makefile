.PHONY: all

all: hello-world \
     trade-insert-order \
     query-account \
     query-account-asset \
     query-account-position \
     query-instrument \
     query-combo \
     market-data

hello-world: ./hello_world/trade.cc ./hello_world/trade.h
	cd ./hello_world && make

trade-insert-order: ./trade_insert_order/trade.cc ./trade_insert_order/trade.h
	cd ./trade_insert_order && make

query-account: ./query_account/query.cc ./query_account/query.h
	cd ./query_account && make

query-account-asset: ./query_account_asset/query.cc ./query_account_asset/query.h
	cd ./query_account_asset && make

query-account-position: ./query_account_position/query.cc ./query_account_position/query.h
	cd ./query_account_position && make

query-instrument: ./query_instrument/query.cc ./query_instrument/query.h
	cd ./query_instrument && make

query-combo: ./query_combo/query.cc ./query_combo/query.h
	cd ./query_combo && make

market-data: ./market_data/market_data.cc ./market_data/market_data.h
	cd ./market_data && make