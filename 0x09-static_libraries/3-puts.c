#include"main.h"

/**
 * _puts - will print a string followed by a new line
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
