#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes a node in a linked list
 * @head: double  pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 for Success, and -1 if Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *xxx = *head;
	listint_t *now = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(xxx);
		return (1);
	}

	while (j < index - 1)
	{
		if (!xxx || !(xxx->next))
			return (-1);
		xxx = xxx->next;
		j++;
	}


	now = xxx->next;
	xxx->next = now->next;
	free(now);

	return (1);
}
