#include "main.h"

/**
 * _isdigit - checks for integer
 * @c: the character to be checked
 * Return: 1 for integer or 0 for anything else
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
