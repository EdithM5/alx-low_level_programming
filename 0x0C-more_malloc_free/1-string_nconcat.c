#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - will concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2 to add to s1
 * Return: pointer to new address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int o = 0;
	unsigned int j, k, l, m;
	char *s3;

	while (s1[i] != '\0')
	{
		i++;
	}
	j = i;
	while (s2[o] != '\0')
	{
		o++;
	}
	m = 0;

	s3 = malloc(sizeof(char) * (j + n + 1));

	if (s3 == NULL)
		return (0);

	for (k = 0; k < j; k++)
	{
		s3[k] = s1[k];
	}
	if (n > m)
	{
		n = (m - 1);
	}
	for (l = 0; l < n; l++)
	{
		s3[j] = s2[l];
		j++;
	}
	s3[j] = '\0';

	return (s3);
}
