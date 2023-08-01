#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @h: double pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int ref;
	listint_t *xxx;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ref = *h - (*h)->next;
		if (ref > 0)
		{
			xxx = (*h)->next;
			free(*h);
			*h = xxx;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}

