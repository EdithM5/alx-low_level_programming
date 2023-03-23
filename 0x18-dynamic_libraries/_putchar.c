#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: char to print
 * Return: 1 for success or -1 and and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
