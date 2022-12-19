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
	unsigned int size = 0, m = 1, count = 0;


	while (*(s + i) != '\0')
	{
		if ((size > 0 && *(s + i) < '0') || *(s + i) > '9')
			break;
		if (*(s + i) == '-')
			j *= -1;
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		i++;
	}
	for (count = i - size; count < i; count++)
	{
		k = k + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (k * j);
}



