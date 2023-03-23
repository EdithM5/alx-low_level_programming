#include"main.h"
/**
 * _islower - Checks for a lowercase character
 * if yes it return 1
 *
 * @c: represents the character
 * Return:  0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
