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

	for (; s[i] != '\0'; i++);

	n = i;

	i = n - 1;

	while (i >= 0)
	{
		i--;
	}
}
