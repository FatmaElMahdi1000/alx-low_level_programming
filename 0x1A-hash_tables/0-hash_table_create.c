#include "hash_tables.h"

/**
 *hash_table_create - creating H.table
 *@size: table size
 *Return: pointer
 */

/**Create the table by allocating memory and setting size, count, and items:**/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
		return (ht);
	}
}
