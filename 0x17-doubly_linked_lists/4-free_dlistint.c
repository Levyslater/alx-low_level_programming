#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free nodes
 * @head: pointer to the first node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = temp->next;
			head->prev = NULL;
			free(temp);
			temp = NULL;
			temp = head;
		}
	}
	free(head);
	head = NULL;
	temp =  NULL;
}
