#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the alphabet in l-case
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		{
		putchar(i);
		}
	putchar('\n');

	return (0);
}
