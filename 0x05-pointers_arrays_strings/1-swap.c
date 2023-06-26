#include "main.h"

/**
 * swap_int - function swaps two integers
 * @a: first integer
 * @b: second integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
