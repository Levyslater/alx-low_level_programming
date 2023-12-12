#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function gets node at specified index
 * @head: pointer to the first node
 * @index: position of node to retrieve
 *
 * Return: pointer to the node, NULL otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	if (index == 0)
		return (head);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	if (index > count)
		return (NULL);
	ptr = head;

	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
