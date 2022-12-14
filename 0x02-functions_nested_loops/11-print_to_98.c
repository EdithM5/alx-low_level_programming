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

	for (i = 0; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}

	return (n);
}
