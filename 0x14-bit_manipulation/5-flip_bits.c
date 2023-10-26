#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: number1
 * @m: number2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, iterat = 0;
	unsigned long int now;
	unsigned long int unchang = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		now = unchang >> j;
		if (now & 1)
			iterat++;
	}

	return (iterat);
}
