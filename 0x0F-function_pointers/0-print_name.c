#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - prints a name
 * @name: is the name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if null*/
		return;

	f(name);
}
