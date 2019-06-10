#include <stdio.h>
#include <f.h>
#include <math.h>



double summ(n)
{
	int i = 0;
	double a = 0;
	do
	{
		a += pow(-1, i)*(1-(pow(2,i)/(pow(2,i)+1)));
		++i;
	} while (i <= n - 1);
	return a;
}


double summ2(double eps)
{
	double a = pow(-1, 0)*(1 - (pow(2, 0) / (pow(2, 0) + 1)));
	double s = a;
	int i = 1;
	do
	{

		a = pow(-1, i)*((1 + 3 * i) / (pow(3, i)));
		s = s + a;
		++i;
	} while (fabs(a) > eps);
	return s;
}


void print(int n, int k)
{
	int q = 1;
	int i = 0;
	do
	{
		if (q == k)
		{
			q = 1;
			++i;
			continue;
		}
		else
		{
			double a = pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
			printf("%.3lf ", a);
		}
		++q;
		++i;
	} while (i <= n - 1);
}



int findFirstElement(double eps)
{
	int i = 0;
	do
	{
		double a = pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	} while (1);
	return i;
}



int findFirstNegativeElement(double eps)
{
	int i = 0;
	do
	{
		double a = pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(a) <= eps && a < 0)
		{
			return i;
		}
		++i;
	} while (1);
}