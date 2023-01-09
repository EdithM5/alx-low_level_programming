#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
/**
 * main - will print minimum no of cents
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int amount = 0;
	int j = 0;
	int k = 0;
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[i] != '\0')
	{
		if (amount >= coins[i])
		{
			j = (amount / coins[i]);
			k += j;
			amount -= coins[i] * j;
		}
		i++;
	}
	printf("%d\n", k);

	return (0);
}
