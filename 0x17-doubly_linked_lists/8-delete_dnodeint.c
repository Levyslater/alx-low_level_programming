#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes specified node
 * @head: pointer to the head pointer
 * @index: node position in index form
 *
 * Return: I on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *current = NULL, *previous = *head;

	if (*head == NULL)
		return (1);

	else if ((*head)->next == NULL && index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}

	while (index > 0)
	{
		if (previous == NULL)
			return (-1);
		current = previous;
		previous = previous->next;
		index--;
	}
	if (previous->next == NULL)
	{
		current->next = NULL;
		free(previous);
		previous = NULL;
		return (1);
	}
	current->next = previous->next;
	previous->next->prev = current;
	free(previous);
	previous = NULL;
	return (1);
}
