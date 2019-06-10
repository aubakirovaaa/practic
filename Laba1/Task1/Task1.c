#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "locale.h"


void main()
{
	setlocale(LC_ALL, "rus");
	int x = 1, y = 1;
	printf("x = %d\r\ny = %d\r\n", x, y);
	printf("f(x,y) = %f\r\n", pow(cos(x), 4) + pow(sin(x), 2) + (1 / 4)*pow(sin(2 * y), 2) - 1);
	printf("Новое значение x:");
	scanf_s("%d", &x);
	printf("Новое значение y:");
	scanf_s("%d", &y);
	printf("f(x,y) = %f\r\n", pow(cos(x), 4) + pow(sin(y), 2) + (1 / 4)*pow(sin(2 * x), 2) - 1);

	system("pause");
	return 0;
}