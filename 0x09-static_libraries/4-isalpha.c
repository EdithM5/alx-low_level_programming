#include"main.h"
/**
 * _isalpha - Return 1 if c is a letter
 *
 * @c: the character to be checked
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
