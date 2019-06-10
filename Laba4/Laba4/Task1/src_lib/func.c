#include <f.h>



void f(const double *x, const double *y, double *result)
{
	*result = pow(cos(*x), 4) + pow(sin(*y), 2) + (1 / 4)*pow(sin(2 * *x), 2) - 1;
}