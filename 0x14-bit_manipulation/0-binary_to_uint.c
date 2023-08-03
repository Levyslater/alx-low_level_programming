#include "main.h"

/**
 * binary_to_uint - function turns binary number to unsigned int
 * @b: string with binary number to convert
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int t = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		t = 2 * t + (b[j] - '0');
	}

	return (t);
}
