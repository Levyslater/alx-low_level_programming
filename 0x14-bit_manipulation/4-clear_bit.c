#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: integer to change pointer
 * @index: index of bit to remove
 *
 * Return: 1 (success), -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
