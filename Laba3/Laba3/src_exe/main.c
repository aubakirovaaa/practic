#include <stdio.h>
#include <stdlib.h>
#include <f.h>

int main()
{
	n = 2;
	printf("%lf\n\r", summ(n));

	eps = 0.0001;
	printf("%lf\n\r", summ2(eps));

	n = 10;
	int k = 2;
	print(n,k);
	printf("\r\n");

	eps = 0.0001;
	printf("%d\r\n", findFirstElement(eps));

	eps = 0.0001;
	printf("%d\r\n", findFirstNegativeElement(eps));

	system("pause");
	return 0;
}