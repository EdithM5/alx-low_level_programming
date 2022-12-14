#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - Will print natural numbers to 0-98
 *
 * @n: number to print to
 * Return: n success
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
			printf("%d", 98);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
			printf("%d", 98);
		}
	}
}
