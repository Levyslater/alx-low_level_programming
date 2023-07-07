#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int w = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for ( ; w < t ; w++)
	{
		dest[w] = src[w];
	}
	dest[t] = '\0';
	return (dest);
}
