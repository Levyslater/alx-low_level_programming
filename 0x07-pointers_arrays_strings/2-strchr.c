#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @c: the character
 * @s: the string
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int d;

	for (d = 0; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (s + d);
	}
	return (NULL);
}
