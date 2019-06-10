#include <stdio.h>
#include <math.h>

double x, y;
double result;

void f(void)
{
	result = pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;
}