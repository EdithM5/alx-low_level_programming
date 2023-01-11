#include <stdlib.h>
#include "main.h"
/**
 * create_array - will create an array of chars initialised by c
 * @size: is the size of array
 * @c: the char to initialize with
 * Return: null if no size and * if success
 */
char *create_array(unsigned int size, char c)
{
	char  *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = (char *) malloc(sizeof(c) * size);

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}

