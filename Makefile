CC := gcc
CFLAGS := -c -Wall -Werror
LFLAGS := -I thirdparty -I src -c
EXE := bin/quadratic-equation
EXE_TEST := bin/quadratic-equation-test
SOURCES := build/src/main.o build/src/function.o
all: $(EXE) $(EXE_TEST)

$(EXE): $(SOURCES)
	$(CC) $(SOURCES) -o $@ -lm

build/src/main.o: src/main.c
	$(CC) $(CFLAGS) src/main.c -o $@

build/src/function.o: src/function.c
	$(CC) $(CFLAGS) src/function.c -o $@

$(EXE_TEST): build/test/function_test.o build/test/main.o build/src/function.o
	$(CC) build/test/function_test.o build/test/main.o build/src/function.o -o $@

build/test/function_test.o: test/function_test.c
	$(CC) $(LFLAGS) test/function_test.c -o $@

build/test/main.o: test/main.c
	$(CC) -I thirdparty -c test/main.c -o $@

.PHONY: all clean
clean:
	rm -rf build/*/*.o
	rm -rf bin/*
