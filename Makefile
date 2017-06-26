all: quadratic-equation.c
	gcc -Wall -o quadratic-equation quadratic-equation.c -lm

clean:
	rm -rf quadratic-equation
