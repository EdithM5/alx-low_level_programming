#include"main.h"
/**
 * rev_string - prints string in reverse
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int n;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	n = i - 1;

	while (j < n)
	{
		s[j] = s[n];
		n--;
		j++;
	}
}
