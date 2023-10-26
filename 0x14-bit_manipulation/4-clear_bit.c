#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 1 at a given index
 * @n: integer pointer to change
 * @index: bit index initialized to 0
 *
 * Return: 1 (success), -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1ul << index));
	return (1);
}
