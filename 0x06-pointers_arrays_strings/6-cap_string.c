#include"main.h"
/**
 * cap_string - capitalize the first letter of all words
 * @s: string
 * Return: new string
 */

char *cap_string(char *s)
{
	int i, j;
	char a[] = ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', '{', ')', '}';

	i = 0;

	while (s[i] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; j <= 12; j++)
		{
			if (a[j] == *(s + i - 1) 
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}




