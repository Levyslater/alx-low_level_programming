#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string1
 * @accept: second string
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int d, n;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[d] == accept[n])
				return (s + d);
		}
	}
	return (NULL);
}
