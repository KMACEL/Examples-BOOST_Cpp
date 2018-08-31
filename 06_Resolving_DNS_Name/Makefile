CC = g++
CFLAGS = -O2 -Wall -Wextra  -std=c++11
MAIN = src/main.cpp
BOOST_PATH = ../../boost/boost_1_68_0
LIBS = -L $(BOOST_PATH)/lib -I $(BOOST_PATH)/include
OUT = test

all: run

build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) $(MAIN) -o $(OUT)  -lboost_system -pthread

run: build
	LD_LIBRARY_PATH=$(BOOST_PATH)/lib ./$(OUT)

udp: src/udp.cpp
	$(CC) $(CFLAGS) $(LIBS) src/udp.cpp -o udp  -lboost_system -pthread

runudp: udp
	LD_LIBRARY_PATH=$(BOOST_PATH)/lib ./udp
	
clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
