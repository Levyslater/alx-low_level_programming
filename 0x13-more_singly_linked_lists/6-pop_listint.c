#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: double pointer to the first element in the linked list
 *
 * Return: data inside element deleted, 0 if list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *xxx;
	int t;

	if (!head || !*head)
		return (0);

	t = (*head)->n;
	xxx = (*head)->next;
	free(*head);
	*head = xxx;

	return (t);
}
