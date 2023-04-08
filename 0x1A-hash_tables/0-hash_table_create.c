#include "hash_tables.h"
/**
 * hash_table_create - will create a hash table
 * @size: size of array
 * Return: NULL for error or pointer to new hash table
 *
 */



hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *MyHashTable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (MyHashTable == NULL)
	{
		return (NULL);
	}
	MyHashTable->size = size;
	MyHashTable->array = calloc(size, sizeof(hash_node_t *));

	if (MyHashTable->array == NULL)
	{
		free(MyHashTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		MyHashTable -> array[i] = NULL;
	}
	
	return MyHashTable;
}
