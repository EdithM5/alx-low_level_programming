#include"main.h"
/**
 * swap_int - swaps the values
 * @a: the dereferenced address
 * @b: the dereferenced address
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
