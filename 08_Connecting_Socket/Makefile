CC = g++
CFLAGS = -O2 -Wall -Wextra  -std=c++14
MAIN = src/main.cpp
LIBS = -I ../../boost_1_67_0/boost
OUT = test

all: run

build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) $(MAIN) -o $(OUT)  -lboost_system -pthread

run: build
	./$(OUT)

dns: src/dns.cpp
	$(CC) $(CFLAGS) $(LIBS) src/dns.cpp -o dns  -lboost_system -pthread
	./dns
	
clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
