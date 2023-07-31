#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked lists
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t lst = 0;

while (h)
{
lst++;
h = h->next;
}

return (lst);
}
