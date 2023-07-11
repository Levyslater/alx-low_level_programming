#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * @str: character
 * Return: Always 0
 */

char *_strdup(char *str)
{
char *xxx;
int t, y = 0;

if (str == NULL)
return (NULL);
t = 0;
while (str[t] != '\0')
t++;

xxx = malloc(sizeof(char) * (t + 1));

if (xxx == NULL)
return (NULL);

for (y = 0; str[y]; y++)
xxx[y] = str[y];

return (xxx);
}
