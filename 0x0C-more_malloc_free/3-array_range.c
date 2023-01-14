#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int i;
	int j = 0;
	int *newarr;

	newarr = malloc(sizeof(int) * ((max - min) + 1));

	if (min > max)
		return (NULL);
	if (!newarr)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		newarr[j] = i;
		j++;
	}

	return (newarr);
}
