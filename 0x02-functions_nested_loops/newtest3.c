#include<stdio.h>
/**
 * times_table - Will print the times table for n specified
 *
 * @n: the table to produce
 * Return: no return value
 */
int main(void)
{
	int a, num1, j, n;
	
	n =16;

	if (!((n > 15) || (n < 0)))
		for (num1 = 0; num1 <= n; num1++)
		{	
			for (j = 0; (j <= n); j++)
			{	
				a = num1 * j;
				if (j == 0)
					putchar(a + '0');
				else
				{
					putchar(',');
					putchar(' ');
					if (a <= 9)
					{
						putchar(' ');
						putchar(' ');
						putchar(a + '0');
					}
					else if ((a > 9) && (a < 100))
					{
						putchar(' ');
						putchar((a / 10) + '0');
						putchar((a % 10) + '0');
					}
					else if (a >= 100)
					{
						putchar((a / 100) + '0');
						putchar(((a / 10) % 10) + '0');
						putchar((a % 10) + '0');
					}
				}
			}
			putchar('\n');
		}
	return (0);
}
