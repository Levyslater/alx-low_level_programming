#include "hash_tables.h"

/**
 * hash_table_set - function main
 * @key: key
 * @value: valeu
 * @ht: pointer tot the table
 *
 * Return: 1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *pair;
	int ret = 0;

	if (key == NULL)
		return (ret);
	index = key_index((const unsigned char *)key, ht->size);
	pair = malloc(sizeof(hash_node_t));
	pair->key = strdup(key);
	pair->value = (char *)value;

	if (ht->array[index] == NULL)
		ht->array[index] = pair;
	else
	{
		pair->next = ht->array[index];
		ht->array[index] = pair;
	}
	ret = 1;
	return (ret);
}
