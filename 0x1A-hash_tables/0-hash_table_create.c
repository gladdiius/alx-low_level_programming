#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: size of the hash table.
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);
	ptr->array = malloc(sizeof(hash_node_t) * size);
	if (ptr->array == NULL)
		return (NULL);
	ptr->size = size;


	for (i = 0; i < ptr->size; i++)
		ptr->array[i] = NULL;
	return (ptr);
}
