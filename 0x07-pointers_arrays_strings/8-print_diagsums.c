#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - prints 2 diagonal sums
 * @a: the array
 * @size: size of square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diag_sum1;
	int diag_sum2;
	int i, row;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diag_sum1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diag_sum2 += a[i];
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
