#include "function.h"
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    int i;
    printf("Введите a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = Discriminant(a, b, c);
    i = Variant(a, b, c, d);
    switch (i) {
    case 0:
	printf ("X - любое число.\n");
	break;
    case 1:
	printf("Корней нет.\n");
	break;
    case 2:
	printf("X = %g\n", -c / b);
	break;
    case 3:
	printf("X = %g\n", -b / (2 * a));
	break;
    case 4:
	printf("X1 = %g, X2 = %g\n", ((-b + sqrt(d)) / (2 * a)), ((-b - sqrt(d)) / (2 * a)));
	break;
    }
    return 0;
}
