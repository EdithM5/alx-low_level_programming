#include"main.h"
#include<stdio.h>
/**
 * _atoi - will convert string into integer
 * @s: the string
 * Return: 0 if there are no numbers
 */
int _atoi(char *s)
{
	unsigned int j = 1;
	unsigned int k = 0;


	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			j *= -1;
		s++;
	}
	if (*s != '\0')
	{
		do {
			k = k * 10 + (*s - '0');
			s++;
		} while (*s >= '0' && *s <= '9');
	}
	return (k * j);
}



