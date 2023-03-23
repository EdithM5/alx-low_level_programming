#include"main.h"
/**
 * _strncpy - will concatenate two strings but use n bytes from the second
 * @dest: first string
 * @src: second string
 * @n: maximum bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for  (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
