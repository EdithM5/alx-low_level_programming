#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n:bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: null or pointer to address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allo;

	allo = 0;

	allo = malloc(size * nmemb);

	if (nmemb == 0 || size == 0 || allo == 0)
		return (NULL);

	return (allo);
	free(allo);
}
