#include "stdio.h"
#include "math.h"
#include "locale.h"

double f(double x, double y)
{
	return pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1;
}

void main()
{
	setlocale(LC_ALL, "rus");
	int x = 1, y = 1;
	printf("x = %d\r\ny = %d\r\n", x, y);
	printf("f(x,y) = %f\r\n", f(x, y));
	printf("Новое значение x:");
	scanf_s("%d", &x);
	printf("Новое значение y:");
	scanf_s("%d", &y);
	printf("f(x,y) = %f\r\n", f(x, y));

	system("pause");
	return 0;
}