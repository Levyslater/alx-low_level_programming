#include "hash_tables.h"
/**
 * hash_djb2 - function creates a hash key
 * @str: pointer to a string char
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	for (; *str != '\0'; str++)
	{
		c = *str;
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
