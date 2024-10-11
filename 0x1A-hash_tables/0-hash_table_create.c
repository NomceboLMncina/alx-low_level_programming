#include "hash.h"

/**
 * hash_table_create - function to create a hash table
 * @size: Size of the array
 * Return: Null for error or a pointer to a new hash table
 * else, pointer to new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; ++x)
	{
		ht->array[x] = NULL;
	}
	return (ht);
}
