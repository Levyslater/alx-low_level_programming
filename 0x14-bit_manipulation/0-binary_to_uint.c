#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function turns binary number to unsigned int
 * @b: string with binary number to convert
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ret = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		ret = 2 * ret + (b[i] - 48);
	}
return (ret);
}
