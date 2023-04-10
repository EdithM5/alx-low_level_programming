#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table to add or update
 * @key: the key. (non- empty)
 * @value: the value.
 *
 * Return: On success - 1 or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned  char *)key, ht->size);

	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	current_node = ht->array[index];
	ht->array[index] = new_node;
	new_node->next = current_node;

	return (1);
}
