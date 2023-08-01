#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: base address to the first node in the list
 *
 * Return: base address to the first node in the next list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}

	*head = old;

	return (*head);
}
