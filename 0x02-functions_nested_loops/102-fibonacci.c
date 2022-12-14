#include<stdio.h>
/**
 * main - Will print the first 40 fibonacci no
 *
 * Return: no return value
 */
int main(void)
{
	int k, count, j, sum;

	k = 1;

	j = 2;

	printf("%d, %d, ", k, j);

	for (count = 2; count < 50; ++count)
	{
		if (count != 49)
		{
			sum = k + j;
			printf("%d, ", sum);
			k = j;
			j = sum;
		}
		else
		{
			sum = k + j;
			printf("%d\n", sum);
		}
	}
	return (0);
}
