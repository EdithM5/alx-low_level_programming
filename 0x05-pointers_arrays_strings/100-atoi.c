#include"main.h"
/**
 * _atoi - will convert string into integer
 * @s: the string
 * Return: 0 if there are no numbers
 */
int _atoi(char *s)
{
	int i;
	int j = 1;
	int k = 0;


	while (*(s + i) != '\0')
	{
		if (*(s + i) < '0' || *(s + i) > 9)
			break;
		if (*(s + i) == '-')
			j *= -1;
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
			k = (k * 10) + (*(s + i) - '0');
	}
	i++;
	return (k * j);
}



