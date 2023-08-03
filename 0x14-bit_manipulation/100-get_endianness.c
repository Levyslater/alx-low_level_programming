#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 (big), 1 otherwise
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *s = (char *) &j;

	return (*s);
}
