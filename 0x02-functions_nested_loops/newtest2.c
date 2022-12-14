#include<stdio.h>
/**
 * add - Will add to integers
 *
 * @a: values to be added
 * @b: values to be added
 * Return: result success
 */
int main(void)
{
	int i;

	for (i = 0; i<=98; i++)
	{	
		printf("%d", i);
		if (i != 98)
		{
		putchar(',');
		putchar(' ');
		}
	}

	return (0);
}
