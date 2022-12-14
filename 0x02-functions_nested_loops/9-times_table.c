#include"main.h"
/**
 * times_table - Will print the times table
 *
 * Return: no return value
 */
void times_table(void)
{
	int a, num1, j;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (j = 0; (j <= 9); j++)
		{
			a = num1 * j;
			if ((a / 10) == 0)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				if (j != 0)
				{
					_putchar(' ');
					_putchar((a % 10) + '0');
				}
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
	return (0);

}
