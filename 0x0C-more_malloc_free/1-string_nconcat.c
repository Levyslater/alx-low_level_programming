#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to copy from
 * @s2: string to copy to
 * @n: number of bytes to copy
 * Return: generic pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int q = 0, r = 0, stlen1 = 0, stlen2 = 0;

	while (s1 && s1[stlen1])
		stlen1++;
	while (s2 && s2[stlen2])
		stlen2++;

	if (n < stlen2)
	{
		s = malloc(sizeof(char) * (stlen1 + n + 1));
	}
	else
	{
	s = malloc(sizeof(char) * (stlen1 + stlen2 + 1));
	}
	if (!s)
		return (NULL);
	while (q < stlen1)
	{
		s[q] = s1[q];
		q++;
	}

	while (n < stlen2 && q < (stlen1 + n))
		s[q++] = s2[r++];
while (n >= stlen2 && q < (stlen1 + stlen2))
{
	s[q++] = s2[r++];

	s[q] = '\0';
}

	return (s);
}
