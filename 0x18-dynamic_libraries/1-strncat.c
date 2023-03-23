#include"main.h"
/**
 * _strncat - will concatenate two strings but use n bytes from the second
 * @dest: first string
 * @src: second string
 * @n: maximum bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	k = i - 1;


	for (j = 0; (src[j] != '\0' && j < n) && dest[i] <= k; i++, j++)
	{

		dest[i] = src[j];
	}
	if (j < n)
		dest[i] = '\0';

	return (dest);
}
