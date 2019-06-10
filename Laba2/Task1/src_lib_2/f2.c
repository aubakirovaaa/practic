#include <stdio.h>
#include <func.h>
#include <math.h>

double f(double x)
{
	if (x < 3.3)
		return pow(x, 4) + 9;
	else if (x >= 3.2)
		return (54 * pow(x,4)) / (-5*pow(x, 2) + 7);

}