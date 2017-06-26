all: hello.c
	gcc -Wall -o hello hello.c

clean:
	rm -rf hello
