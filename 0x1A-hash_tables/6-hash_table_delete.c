#include "hash_tables.h"

/**
 * hash_table_delete - will delete a hash table
 * @ht: the table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node1, *node2;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node1 = ht->array[i];
		while (node1)
		{
			node2 = node1;
			node1 = node1->next;
			free(node2->key);
			free(node2->value);
			free(node2);
		}
	}
	free(ht->array);
	free(ht);
}
