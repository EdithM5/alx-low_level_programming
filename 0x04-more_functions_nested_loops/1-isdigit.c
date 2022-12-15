#include"main.h"

/**
 * _isdigit - checks for digits
 * @c: what to check for
 * Return: 0 or 1 if successful
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
