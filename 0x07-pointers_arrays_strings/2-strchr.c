#include"main.h"
#define NULL 0
/**
 * _strchr - will search for char c
 * @s: the string
 * @c: character in string
 * Return: pointer to c or null
 */
char *_strchr(char *s, char c)
{
	unsigned int n, i, j;

	j = 0;

	while (s[j] != '\0')
		j++;
	n = j;

	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (i == n)
		{
			return (NULL);
		}
	}
}
