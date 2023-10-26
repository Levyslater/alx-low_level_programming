#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: int to find
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n >> index) & 1);
	else
		return (-1);
}
