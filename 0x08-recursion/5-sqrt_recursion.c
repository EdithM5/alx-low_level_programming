#include "main.h"
/**
 * helper - finds squareroot
 * @a: the number
 * @b: the number to test
 * Return: squareroot
 */
int helper(int a, int b)
{
	if (b * b > a)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (helper(a, b + 1));
	return (1);
}
/**
 * _sqrt_recursion - returns natutal squareroot
 * @n: the number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
