.PHONY: clean all test
CFLAGS = -Wall -Werror

all: bin/quadratic-equation

bin/quadratic-equation: build/src/main.o build/src/function.o
	@echo "Make is 100%"
	@gcc $(CFLAGS) build/src/main.o build/src/function.o -o bin/quadratic-equation -lm

build/src/main.o: src/main.c src/function.h
	@gcc $(CFLAGS) -c src/main.c -o build/src/main.o -lm

build/src/function.o: src/function.c src/function.h
	@gcc $(CFLAGS) -c src/function.c -o build/src/function.o

test:
	make bin/quadratic-equation_test
	bin/quadratic-equation_test

bin/quadratic-equation_test: build/test/main.o build/test/function_test.o
	@gcc $(CFLAGS) build/test/main.o build/test/function_test.o build/src/function.o -o bin/quadratic-equation_test

build/test/main.o: test/main.c src/function.h
	@gcc $(CFLAGS) -I thirdparty -c test/main.c -o build/test/main.o

build/test/function_test.o: src/function.h test/function_test.c
	@gcc $(CFlAGS) -I thirdparty -c test/function_test.c -o build/test/function_test.o

clean:
	@echo "Cleaning files in build directory"
	rm -rf build/*/*.o
	rm -rf bin/*
