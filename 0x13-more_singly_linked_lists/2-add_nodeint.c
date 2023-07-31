#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - function insert new node at the beginning of a linked list
 * @head: first node pointer in the list
 * @n: data to insert in that new node
 *
 * Return: address to new node, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add;

add = malloc(sizeof(listint_t));
if (!add)
return (NULL);

add->n = n;
add->next = *head;
*head = add;

return (add);
}
