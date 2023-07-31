#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - sends elements of a linked list to std output
 * @h: type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t lsts = 0;

while (h)
{
printf("%d\n", h->n);
lsts++;
h = h->next;
}

return (lsts);
}
