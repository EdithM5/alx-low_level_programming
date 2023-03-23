#include"main.h"

/**
 * _isupper - checks upercase
 * @c: what to check
 * Return: 0 success
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
