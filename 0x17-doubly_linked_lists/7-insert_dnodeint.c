#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts node at specific index
 * @h: points to the head pointer
 * @idx: index to add the node
 * @n: node data
 *
 * Return: Address of new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new, *temp = *h;
	unsigned int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx >= count && idx != 0)
		return (NULL);
	temp = NULL;

	if (*h == NULL || idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}
	while (idx > 1)
	{
		ptr = ptr->next;
		idx--;
	}
	/* call add at end function*/
	if (ptr->next == NULL)
	{
		temp = add_dnodeint_end(h, n);
		return (temp);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);
	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;
	new->next->prev = new;
	return (new);
}
