#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints combinations 0-9 with commas
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (!((i == j) || (i > j)))
			{
				putchar(i);
				putchar(j);
				if ((i == '8') && (j == '9'))
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
