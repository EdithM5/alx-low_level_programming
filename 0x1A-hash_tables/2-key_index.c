#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: the key whose index the function should return
 * @size: the size of array of the hash table
 *
 * Return: the index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = (hash_djb2(key) % size);

	return (index);
}
