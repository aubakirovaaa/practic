#include <stdio.h>
#include <locale.h>

extern double f(double x, double y);

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