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
	/**ht = table**/
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	ht->size = size;
	ht->count = 0;
	ht->items = (hash_table **)calloc(ht->size, sizeof(hash_table *));

	for (int i = 0; i < ht->size; i++)
	{
		ht->items = NULL;
	}
	return (ht);
}
