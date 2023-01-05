#include "main.h"
/**
 * evaluate_n - check for prime number
 * @n: the number
 * @iterator: number to iterate
 * Return: 1 or 0 as below
 */
int evaluate_n(int n, int iterator)
{
	if (iterator == n - 1)
		return (1);
	else if (n % iterator == 0)
		return (0);
	if (n % iterator != 0)
		return (evaluate_n(n, iterator + 1));

	return (0);
}
/**
 * is_prime_number - checks id its a prime number
 * @n: the number
 * Return: 1 if it is 0 otherwise
 */
int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (evaluate_n(n, iterator));
}
