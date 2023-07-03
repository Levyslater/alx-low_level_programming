#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d, n, check, value;
	
	value = 0;
	for (d = 0; s[d] != '\0'; d++)
	{
		check = 0;
		for (n = 0; accept[0] != '\0'; n++)
		{
			if (accept[n] == s[d])
			{
				value++;
				check = 1;
			}
		}
	}
}
