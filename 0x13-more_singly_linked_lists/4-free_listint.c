#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - funtion that frees a linked list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *xxx;

	while (head)
	{
		xxx = head->next;
		free(head);
		head = xxx;
	}
}
