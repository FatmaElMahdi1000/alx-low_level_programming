#include "hash_tables.h"

/**
 *hash_table_create - creating H.table
 *@key: element in the hash table
 *@value: element in the hash table
 *Return: pointer
 */

/**Create the table by allocating memory and setting size, count, and items:**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	/**ht = table**/
	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->count = 0;
	ht->items = calloc(ht->size, sizeof(hash_table *));

	if (ht->items == NULL)
		return (NULL);

	for (int i = 0; i < ht->size; i++)
	{
		ht->items[i] = NULL;
	}
	return (ht);
}
