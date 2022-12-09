#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints combinations of 4, 0-9 with commas
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
