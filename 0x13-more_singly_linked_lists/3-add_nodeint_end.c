#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - funtion that adds a node at the end of a linked list
 * @head: pointer to the list
 * @n: info to insert in the new element
 *
 * Return: base addresss to the new node, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *add;
listint_t *tmp = *head;

add = malloc(sizeof(listint_t));
if (!add)
return (NULL);

add->n = n;
add->next = NULL;

if (*head == NULL)
{
*head = add;
return (add);
}

while (tmp->next)
tmp = tmp->next;

tmp->next = add;

return (add);
}
