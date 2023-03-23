#include"main.h"
/**
 * _strstr - gives the substring from needle
 * @haystack: the string
 * @needle: substring to compare with
 * Return: pointer to first match of substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	i = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			k = 0;
			while (needle[k] != '\0')
			{
				if (haystack[j] == needle[k])
					j++, k++;
				else
					break;
			}
			if (needle[k] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
