#include "hash_tables.h"

/**
 * shash_table_create - will create a sorted hash table
 * @size: size of array
 * Return: NULL for error or pointer to new hash table
 *
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *MyHashTable = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (MyHashTable == NULL)
	{
		return (NULL);
	}
	MyHashTable->size = size;
	MyHashTable->shead = NULL;
	MyHashTable->stail = NULL;

	MyHashTable->array = calloc(size, sizeof(shash_node_t *));

	if (MyHashTable->array == NULL)
	{
		free(MyHashTable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		MyHashTable->array[i] = NULL;
	}

	return (MyHashTable);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table to add or update
 * @key: the key. (non- empty)
 * @value: the value.
 *
 * Return: On success - 1 or 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->shead;
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = value_copy;
			return (1);
		}
		current_node = current_node->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		current_node = ht->shead;
		while (current_node->snext != NULL && strcmp(current_node->snext->key, key) < 0)
			current_node = current_node->snext;
		new_node->sprev = current_node;
		new_node->snext = current_node->snext;
		if (current_node->snext == NULL)
			ht->stail = new_node;
		else
			current_node->snext->sprev = new_node;
		current_node->snext = new_node;
	}

	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: sorted hash table.
 * @key: The key.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 * @ht: the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
