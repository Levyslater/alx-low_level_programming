#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node
 * @head: address to the first node in the list
 * @idx: index to add new node
 * @n: data to insert in the new node
 *
 * Return: pointer to new node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *add;
	listint_t *xxx = *head;

	add = malloc(sizeof(listint_t));
	if (!add || !head)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (idx == 0)
	{
		add->next = *head;
		*head = add;
		return (add);
	}

	for (j = 0; xxx && j < idx; j++)
	{
		if (j == idx - 1)
		{
			add->next = xxx->next;
			xxx->next = add;
			return (add);
		}
		else
			xxx = xxx->next;
	}

	return (NULL);
}
