#include "main.h"
/**
 * _str_cmp_recursion - compare 1st and 2nd half of string
 * @first: first half of stroing
 * @last: last half of string
 * Return: 1 if palindrome, 0 if not
 */

int _str_cmp_recursion(char *first, char *last)
{
	if (first >= last)
	{
		return (1);
	}
	if (*first == *last)
	{
		return (_str_cmp_recursion(first + 1, last - 1));
	}

	return (0);
}
/**
 * _strlen_recursion - strlen with recurssion method
 * @s: the string
 * Return: integer length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
/**
 * is_palindrome - checks if string is empty
 * @s: the string
 * Return: 1 if empty 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_str_cmp_recursion(s, (s + _strlen_recursion(s) - 1)));
}
