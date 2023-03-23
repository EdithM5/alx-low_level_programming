#include "main.h"
/**
 * _abs - Will give the absolute value of an integer
 *
 * @x: the integer to be checked
 * Return: an unsigned integer value
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		x = x * -1;
		return (x);
	}
}
