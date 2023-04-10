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

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
