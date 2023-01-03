#include"main.h"
/**
 * _strspn - gives the length of s that has same bytes as accept
 * @s: the string
 * @accept: bytes to compare with
 * @Return: bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				j++;
				break;
			}
			if (accept[k + 1] == '\0' && s[i] != accept[k])
				return(j);
		}
		i++;
	}
	return (j);
}
