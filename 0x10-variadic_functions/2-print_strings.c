#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: is a separator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *printstr;

	va_list strgs;

	va_start(strgs, n);

	for (i = 0; i < n; i++)
	{
		printstr = va_arg(strgs, char *);

		if (printstr)
			printf("%s", printstr);

		else
			 printf("nil");

		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(strgs);
}
