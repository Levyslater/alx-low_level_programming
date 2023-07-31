#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 * @head: double pointer to the listint_t list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *xxx;

	if (head == NULL)
		return;

	while (*head)
	{
		xxx = (*head)->next;
		free(*head);
		*head = xxx;
	}

	*head = NULL;
}
