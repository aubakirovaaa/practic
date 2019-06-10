#include <stdio.h>
#include <math.h>

double f(double x, double y)
{
	return pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;
}