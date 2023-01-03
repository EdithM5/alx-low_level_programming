#include"main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: address to copy to
 * @src: address to copy from
 * @n: number of bytes to copy.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
