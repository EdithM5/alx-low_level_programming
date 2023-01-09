#include"main.h"
#define NULL 0
/**
 * _strpbrk - gives the first character from accept
 * @s: the string
 * @accept: bytes to compare with
 * Return: pointer to first match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, k;

	i = 0;

	while (s[i] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}
