#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *  sum_them_all - returns the sum of all its parameters
 *  @n: one of the parameters
 *  Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list param;

	va_start(param, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(param, unsigned int);

		sum += num;
	}
	return (sum);
}
