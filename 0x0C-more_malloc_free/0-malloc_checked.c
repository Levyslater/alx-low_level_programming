#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned integers to allocate
 * Return: pointer with base address
 */

void *malloc_checked(unsigned int b)
{
	void *xxx;

	xxx = malloc(b);

	if (xxx == NULL)
		exit(98);

	return (xxx);
}
