#include<stdlib.h>
#include "function_pointers.h"
/**
 * int_index - will search an ineger
 * @array: array name
 * @size: size of array
 * @cmp: pointer to a function
 * Return: 0 success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
