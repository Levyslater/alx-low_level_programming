#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: character for array
 * @size: size of the array
 * Return: NULL if fail else pointer to allay
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int t;

p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		p[t] = c;
	return (p);
}
