#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: string one and two concat
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = t = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[t] != '\0')
		t++;
	conct = malloc(sizeof(char) * (i + t + 1));

	if (conct == NULL)
		return (NULL);
	i = t = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
	i++;
	}
	while (s2[t] != '\0')
	{
		conct[i] = s2[t];
		i++, t++;
	}
	conct[i] = '\0';
	return (conct);
}

