#include "main.h"

/**
 * _strcmp - function compare string values
 * @s1: input string1
 * @s2: input string2
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[1] != '\0')
	{
		if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
				}
				i++;
				}
				return (0);
				}
