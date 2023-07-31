#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function compute sum of all data in a listint_t list
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *xxx = head;

	while (xxx)
	{
		sum += xxx->n;
		xxx = xxx->next;
	}

	return (sum);
}
