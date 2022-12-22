#include"main.h"
/**
 * leet - encodes a string to 1337
 * @s: string
 * Return: the new string
 */
char *leet(char *s)
{
	int j = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + i) == lowercase[i] || *(s + j) == uppercase[i])
			{
				*(s + j) = numbers[i];
				break;
			}
		}
		i++;
	}
	return (s);
}
