#include "main.h"
/**
 * factorial - calculates factorial
 * @n: the int whose factorial we want
 * Return: answer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
