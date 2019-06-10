#include "func.h"

int strlen(const char* str)
{
	register const char* s = str;
	while (*str++);
	return str - s - 1;
}