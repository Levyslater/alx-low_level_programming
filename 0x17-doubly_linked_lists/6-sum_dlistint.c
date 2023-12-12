#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that adds node data
 * @head: points to the fiirst node
 *
 * Return: sum of nodes, 0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
