#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Введите a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
	if (b == 0) {
	    if (c == 0) {
		printf("Х - любое число.\n");
	    } else {
		printf("Корней нет.\n");
	    }
	} else {
	    printf ("Х = %g\n", -c / b);
	}
    } else {
	float d, x1, x2;
	d = b * b - 4 * a * c;
	if (d < 0) {
	    printf("Корней нет\n");
	} else {
	    if (d == 0) {
		printf("X = %g\n", -b / (2 * a));
	    } else {
		x1 = ((-b + sqrt(d) ) / (2 * a));
		x2 = ((-b - sqrt(d) ) / (2 * a));
		printf("X1 = %g, X2 = %g\n", x1, x2);
	    }
	}
    }
    return 0;
}
