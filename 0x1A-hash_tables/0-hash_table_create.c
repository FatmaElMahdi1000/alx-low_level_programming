#include "hash_tables.h"

/**
 *hash_table_create - creating H.table
 *@key: element in the hash table
 *@value: element in the hash table
 *Return: pointer
 */

hash_table *create_item(char *key, int *value)
{
	/**Creates a pointer to a new HashTable item.**/
	hash_table *item = (hash_table *)malloc(sizeof(hash_table));

	item->key = (char *)malloc(strlen(key) + 1);
	item->value = (int *)malloc(strlen(value) + 1);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}

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
