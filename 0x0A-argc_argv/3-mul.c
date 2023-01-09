#include<stdio.h>
#include<stdlib.h>
/**
 * main - will print multiplication of 2 numbers
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[3])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = (atoi(argv[1]) * atoi(argv[2]));

	printf("%d\n", mul);
	return (0);
}
