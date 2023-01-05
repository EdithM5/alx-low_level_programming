#include "main.h"
/**
 * _pow_recursion - returns x raised to y
 * @x: int whose power we want
 * @y: power to raise to
 * Return: answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

		return (x * (_pow_recursion(x ^ y)));
}
