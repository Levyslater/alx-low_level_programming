#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *xxx;

	if (nmemb == 0 || size == 0)
		return (NULL);

xxx = malloc(size * nmemb);
	if (xxx == NULL)
		return (NULL);

_memset(xxx, 0, nmemb * size);

return (xxx);
}
