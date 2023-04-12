#include "hash_tables.h"
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	if (ht == NULL)
	{
		printf("Failed to create sorted hash table\n");
		exit(EXIT_FAILURE);
	}
	printf("Success yeey\n");
	return (0);
}
