#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - will print numbers
 * @separator: string between numbers
 * @n: one of the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	int printnum;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printnum = va_arg(nums, int);

		printf("%d", printnum);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
