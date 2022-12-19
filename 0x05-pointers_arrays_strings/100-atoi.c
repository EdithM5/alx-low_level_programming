#include"main.h"
#include<stdio.h>
/**
 * _atoi - will convert string into integer
 * @s: the string
 * Return: 0 if there are no numbers
 */
int _atoi(char *s)
{
	unsigned int i;
	unsigned int j = 1;
	unsigned int k = 0;


	while (*(s + i) != '\0' && (*(s + i) < '0' || *(s + i) > '9'))
	{
		if (*(s + i) == '-')
			j *= -1;
		i++;
	}
	if (*(s + i) != '\0')
	{
		do {
			k = k * 10 + (*(s + i) - '0');
			i++;
		} while ( *(s + i) >= '0' && *(s+i) <= '9');
	}
	return (k * j);
}



