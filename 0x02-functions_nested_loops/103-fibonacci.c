#include<stdio.h>
/**
 * main - Will print the sum of even fibonacci
 *
 * Return: no return value
 */
int main(void)
{
	int count;
	long int sum, k, newsum, j;

	k = 1;

	j = 2;

	newsum = 2;

	for (count = 2; sum < 4000000; ++count)
	{
		sum = k + j;
		k = j;
		j = sum;
		if ((sum % 2) == 0)
		{
			newsum = newsum + sum;
		}
	}
	printf("%ld\n", newsum);

	return (0);
}
