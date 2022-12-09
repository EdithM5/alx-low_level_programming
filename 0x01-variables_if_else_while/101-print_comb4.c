#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints combinations of 3, 0-9 with commas
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (!((k == j) || (j == i) || (j > k) || (i > j)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == '7') && (j == '8') && (k == '9'))
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
	}
	putchar('\n');

	return (0);
}
