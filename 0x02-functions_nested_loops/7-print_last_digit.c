#include "main.h"
/**
 * print_last_digit - Will print the last digit of a number
 *
 * @x: the integer to be checked
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int n;

	n = x % 10;

	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}

