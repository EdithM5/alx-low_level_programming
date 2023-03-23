#include"main.h"
/**
 * _strcat - will concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	n = i - 1;

	for (j = 0; src[j] != '\0' && dest[i] <= n; i++, j++)
	{

		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
