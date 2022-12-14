#include"main.h"
/**
 * print_times_table - Will print the times table for n specified
 *
 * @n: the table to produce
 * Return: no return value
 */
void print_times_table(int n)
{
	int a, num1, j;

	if (!((n > 15) || (n < 0)))
		for (num1 = 0; num1 <= n; num1++)
		{
			for (j = 0; (j <= n); j++)
			{
				a = num1 * j;
				if (j == 0)
					_putchar(a + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (a <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(a + '0');
					}
					else if ((a > 9) && (a < 100))
					{
						_putchar(' ');
						_putchar((a / 10) + '0');
						_putchar((a % 10) + '0');
					}
					else if (a >= 100)
					{
						_putchar((a / 100) + '0');
						_putchar(((a / 10) % 10) + '0');
						_putchar((a % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
}
