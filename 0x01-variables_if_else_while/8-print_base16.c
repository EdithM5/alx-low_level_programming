#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints 0-F
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int i = '0';
	char j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
