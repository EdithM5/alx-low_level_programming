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

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');

	return (0);
}
