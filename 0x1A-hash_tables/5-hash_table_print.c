#include "hash_tables.h"

/**
 * hash_table_print - function prints hash table content
 * @ht: pointer to the hash table
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
		temp = ht->array[i];

	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->next;
	}
}
printf("}\n");
}
