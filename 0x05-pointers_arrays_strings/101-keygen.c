#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - generates random paswords
 * Return: 0 success
 */
int main(void)
{
	int passw, sum;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		passw = (rand() % 128);
		sum += passw;

		printf("%c", passw);
	}
	printf("%c", 2772 - sum);
	return (0);
}
