#include <stdio.h>
#include <func.h>


_Bool isInArea(double x, double y)
{

	if (x >= 0 && x <= 1 && y >= -1 && y <= 1)
		return 1;
	else if (x >= -1 && x <= 0 && y <= pow(x,2) && y>=-pow(x,2))
		return 1;
	else 
		return 0;

}