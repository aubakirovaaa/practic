#include <stdio.h>
#include <f.h>
#include <math.h>


double summ(n)
{
	int i = 0;
	double a = 0;
	while (i <= n - 1)
	{
		a += pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
		++i;
	}
	return a;
}


double summ2(double eps)
{
	double a = pow(-1, 0)*(1 - (pow(2, 0) / (pow(2, 0) + 1)));
	double s = a;
	int i = 1;
	while (fabs(a) > eps)
	{

		a = pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
		s = s + a;
		++i;
	}
	return s;
}


void print(int n, int k)
{
	int q = 1;
	int i = 0;
	while (i <= n - 1)
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
	}
}



int findFirstElement(double eps)
{
	int i = 0;
	while (1)
	{
		double a = pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	}
	return i;
}



int findFirstNegativeElement(double eps)
{
	int i = 0;
	while (1)
	{
		double a = pow(-1, i)*(1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(a) <= eps && a < 0)
		{
			return i;
		}
		++i;
	}
}