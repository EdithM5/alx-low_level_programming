#include"main.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: Always 0 (success).
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}

}

