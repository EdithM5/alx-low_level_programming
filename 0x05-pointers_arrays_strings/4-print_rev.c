#include"main.h"
/**
 * print_rev - prints string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int n;

	while (s[i] != '\0')
	{
		i++;
	}

	n = i;

	i = n - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
