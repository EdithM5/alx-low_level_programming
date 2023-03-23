#include"main.h"
/**
 * _strchr - will search for char c
 * @s: the string
 * @c: character in string
 * Return: pointer to c or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;


	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
