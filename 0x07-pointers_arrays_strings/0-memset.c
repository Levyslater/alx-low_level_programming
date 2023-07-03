#include "main.h"

/**
 * _memset - a fuction that fills memory with constant byte
 * @n: memory bytes
 * @s: pointer
 * @b: constant byte
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
