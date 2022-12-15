#include<stdio.h>
/**
 * main - Will print the first 98 fibonacci no
 *
 * Return: no return value
 */
int main(void)
{
	int count;
	long int sum, k, j;
	unsigned long int k1, k2, j1, j2;

	k = 1;

	j = 2;

	printf("%ld, %ld, ", k, j);

	for (count = 2; count < 91; ++count)
	{
		sum = k + j;
		printf("%ld, ", sum);
		k = j;
		j = sum;
	}
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (count = 92; count < 98; ++count)
	{
		printf("%lu, ", j1 + (j2 / 1000000000));
		printf("%lu", j2 % 1000000000);
		j1 = j1 + k1;
		k1 = j1 - k1;
		j2 = j2 + k2;
		k2 = j2 - k2;
	}
	printf("\n");

	return (0);
}
