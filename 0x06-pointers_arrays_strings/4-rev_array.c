#include"main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: array set
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, new;

	i = 0;

	n = n - 1;
	while (i <= n)
	{
		new = a[i];
		a[i++] = a[n];
		a[n--] = new;
	}
}
