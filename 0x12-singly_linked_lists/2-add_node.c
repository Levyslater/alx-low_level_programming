#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - a function that returns length of a string
 * @a: char
 *
 * Return: lent
 */
int _strlen(const char *a)
{
	int lent = 0;

	while (a[lent] != '\0')
	{
		lent++;
	}
	return (lent);
}

/**
 * add_node - function that adds a new node at the beginning
 * @str: elements
 * @head: head of the list
 *
 * Return: address of new element or null if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
