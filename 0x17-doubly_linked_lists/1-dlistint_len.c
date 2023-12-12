#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that calculates the number of nodes
 * @h: ponter to the first node
 *
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
