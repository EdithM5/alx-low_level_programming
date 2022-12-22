#include"main"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0, < 0, 0 >, if equal, s1 less than s2, s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];

	return (j);
}
