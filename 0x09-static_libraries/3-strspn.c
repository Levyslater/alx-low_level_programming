#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
