#!/usr/bin/make
CC=g++
CFLAGS=-fPIC
LDFLAGS=-shared
LDLIBS=-ldl
TARGET=hook_test.so

all : $(TARGET)

$(TARGET): hook_test.cpp
		   $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^ $(LDLIBS)

clean:
	rm -f $(TARGET) *.o


.PHONY: all clean
