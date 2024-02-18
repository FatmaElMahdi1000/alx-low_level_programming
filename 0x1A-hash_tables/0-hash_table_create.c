#include "hash_tables.h"

/**
 *hash_table_create - creating H.table
 *@size: table size
 *Return: pointer
 */

/**Create the table by allocating memory and setting size, count, and items:**/

hash_table_t *hash_table_create(unsigned long int size)
{
	int count;
	/**table is declared by ht**/
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t *));

	ht->size = size;
	ht->count = 0;
	ht->array = (hash_node_t **) calloc(ht->size, (hash_node_t *));

	for (int i = 0; i < ht->size; i++)
	{
		ht->array[i] = NULL;
		return (ht);
	}
}
