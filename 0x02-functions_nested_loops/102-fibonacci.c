#include<stdio.h>
/**
 * main - Will print the first 40 fibonacci no
 *
 * Return: no return value
 */
int main(void)
{
	int count;
	long int sum, k, j;

	k = 1;

	j = 2;

	printf("%ld, %ld, ", k, j);

	for (count = 2; count < 50; ++count)
	{
		if (count != 49)
		{
			sum = k + j;
			printf("%ld, ", sum);
			k = j;
			j = sum;
		}
		else
		{
			sum = k + j;
			printf("%ld\n", sum);
		}
	}
	return (0);
}
