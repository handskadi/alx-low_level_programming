#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table for Hash Project.
 * @size: size of the table array.
 *
 * Return: NULL = Error  OR ptr to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	hb = hash_tb;
	hash_tb = malloc(sizeof(hash_table_t));
	if (hash_tb == NULL)
		return (NULL);
	hash_tb->size = size;
	hash_tb->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tb->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_tb->array[i] = NULL;
	return (hash_tb);
}
