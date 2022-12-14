#include<stdio.h>
/**
 * times_table - Will print the times table for n specified
 *
 * @n: the table to produce
 * Return: no return value
 */
int main(void)
{
	int sum, i;
	sum = 0;

	for (i = 0; i < 10; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
