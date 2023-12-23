#include "hash_tables.h"

/**
 * key_index - function generates an index for a key
 * @size: size of the hash table
 * @key: pointer to the key
 *
 * Return: index for key_value pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
