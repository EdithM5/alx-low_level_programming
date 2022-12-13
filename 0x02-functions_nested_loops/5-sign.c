#include "main.h"
/**
 * print_sign - Will print the sign of th direction of n
 *
 * @n: number that we are checking
 * Return: 0 or 1 or -1
 */
int print_sign(int n)
{
	int sign_result;

	if (n > 0)
	{
		sign_result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign_result = 0;
		_putchar('0');
	}
	else
	{
		sign_result = -1;
		_putchar('-');
	}
	return (sign_result);
}
