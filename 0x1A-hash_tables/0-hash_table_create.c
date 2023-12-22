#include "hash_tables.h"

/**
 * hash_table_create - fuction creates a new struct table
 * @size: defnes the table size
 *
 * Return: pointer to the new table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));

	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ptr->array[i] = NULL;

	return (ptr);
}
