#include <stdio.h>
#include <locale.h>
#include "func.h"


void main()
{

	setlocale(LC_ALL, "rus");
	x = 1, y = 1;
	f();
	printf("x = %.lf\r\ny = %.lf\r\n", x, y);
	printf("f(x,y) = %lf\r\n", result);
	printf("Новое значение x:");
	scanf_s("%lf", &x);
	printf("Новое значение y:");
	scanf_s("%lf", &y);
	f();
	printf("f(x,y) = %lf\r\n", result);

	system("pause");
	return 0;
}
