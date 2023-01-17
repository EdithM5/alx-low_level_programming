#include <stdio.h>
#include<stdlib.h>
/**
 * main - will print the file that it was compiled from
 *
 * Return: 0 success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
