CC = g++
CFLAGS = -O2 -Wall -Wextra -Werror -std=c++11
MAIN = src/main.cpp
LIBS = -I ../../boost_1_67_0/boost
OUT = test

all: run

build: $(MAIN)
	$(CC) $(CFLAGS) $(LIBS) $(MAIN) -o $(OUT) 

run: build
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin

.PHONY: clean
