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
	int j = 0;

	while  (src[j] != '\0' && j < n)
	{

		dest[j] = src[j];
		j++;
	}
	while (j <= n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
