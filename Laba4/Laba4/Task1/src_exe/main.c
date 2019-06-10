#include <f.h>
#include <stdlib.h>


void main(void)
{
	double x1 = 5;
	double y1 = 2;
	double res;
	f(&x1, &y1, &res);
	printf("x=%lf\n", x1);
	printf("x=%lf\n", y1);
	printf("%f\r\n", res);
	printf("Enter new x:");
	scanf_s("%lf", &x1);
	printf("Enter new y:");
	scanf_s("%lf", &y1);
	f(&x1, &y1, &res);
	printf("%f\r\n", res);
	system("pause");
}