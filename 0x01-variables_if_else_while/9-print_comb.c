#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints 0-9 with commas
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
