#include "hash_tables.h"

/**
 * hash_table_get - function retrieves an key value
 * @ht: pointer to the hash table
 * @key: pointer to the key
 *
 * Return: pointer to the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
