#include "stdio.h"
#include "math.h"
#include "locale.h"

double x, y;
double result;
void f(void);

void main()
{
	
	setlocale(LC_ALL, "rus");
    x = 1, y = 1;
	f();
	printf("x = %.lf\r\ny = %.lf\r\n", x, y);
	printf("f(x,y) = %lf\r\n", result);
	printf("����� �������� x:");
	scanf_s("%lf", &x);
	printf("����� �������� y:");
	scanf_s("%lf", &y);
	f();
	printf("f(x,y) = %lf\r\n", result);

	system("pause");
	return 0;
}

void f(void)
{
	result = pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;
}