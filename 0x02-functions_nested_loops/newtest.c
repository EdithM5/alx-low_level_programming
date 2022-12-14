#include<stdio.h>
/**
 * times_table - Will print the times table
 *
 * @x: the integer to be checked
 * Return: no return value
 */
int main (void)
{
	int a;
	int num1;
	int j;

	for(num1 = 0; num1 <= 9; num1++)
	{
		for(j = 0; (j <= 9); j++)
		{
			a = num1 * j;
			if ((a / 10) == 0)
			{
				if (j == 0)
				{
					putchar('0');
				}
				
				if (j != 0)
				{
					putchar(' ');
					putchar((a % 10) + '0');
				}
				if (j < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				if (j < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
		
		putchar('\n');
	}

	return (0);

}
