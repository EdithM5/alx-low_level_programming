#include"main.h"
/**
 * puts_half - printsthe second half of a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;

	len = i - 1;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (j = (n + 1); str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}

