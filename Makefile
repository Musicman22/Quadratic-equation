.PHONY: clean all test
CC := gcc
CFLAGS = -Wall -Werror

all: bin/quadratic-equation

bin/quadratic-equation: build/src/main.o build/src/function.o
	$(CC) $(CFLAGS) build/src/main.o build/src/function.o -o $@ -lm

build/src/main.o: src/main.c src/function.h
	$(CC) $(CFLAGS) -c src/main.c -o $@ -lm

build/src/function.o: src/function.c src/function.h
	$(CC) $(CFLAGS) -c src/function.c -o $@

test:
	make bin/quadratic-equation_test
	bin/quadratic-equation_test

bin/quadratic-equation_test: build/test/main.o build/test/function_test.o
	$(CC) $(CFLAGS) build/test/main.o build/test/function_test.o build/src/function.o -o $@

build/test/main.o: test/main.c src/function.h
	$(CC) $(CFLAGS) -I thirdparty -c test/main.c -o $@

build/test/function_test.o: src/function.h test/function_test.c
	$(CC) $(CFlAGS) -I thirdparty -c test/function_test.c -o $@

clean:
	rm -rf build/*/*.o
	rm -rf bin/*
