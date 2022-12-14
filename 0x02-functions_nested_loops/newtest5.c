#include<stdio.h>
/**
 * times_table - Will print the times table for n specified
 *
 * @n: the table to produce
 * Return: no return value
 */
int main(void)
{
	int k, count, j, sum;
	k = 0;

	j = 1;

	printf("%d, %d, ", k, j);

	 for (count = 2; count < 14; ++count)
	{
		sum = k + j;
		printf("%d ,", sum);
		k = j;
		j = sum;

	}
	return (0);
}
