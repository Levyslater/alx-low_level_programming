#include "main.h"

/**
 * _memcpy - function copies memory area
 * @n: bytes to be copied
 * @src: source bytes
 * @dest: destination bytes
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
