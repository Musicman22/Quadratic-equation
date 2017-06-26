#include <stdio.h>

int Variant(float a, float b, float c, float d)
{
    if (a == 0) {
	if (b == 0) {
	    if (c == 0) {
		return 0;
	    } else {
		return 1;
	    }
	} else {
	    return 2;
	}
    } else {
	if (d < 0) {
	    return 1;
	} else {
	    if (d == 0) {
		return 3;
	    } else {
		return 4;
	    }
	}
    }
    return 0;
}

float Discriminant(float a, float b, float c)
{
    float d = b * b - 4 * a * c;
    return d;
}
