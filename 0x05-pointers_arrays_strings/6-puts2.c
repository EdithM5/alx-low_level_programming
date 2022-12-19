#include"main.h"
/**
 * puts2 - prints every other character
 * @str: the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != 92)
			_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
