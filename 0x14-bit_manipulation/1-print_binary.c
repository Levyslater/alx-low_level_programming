#include "main.h"

/**
 * print_binary - function prints binary equivalent of an integer
 * @n: int to print in binary form
 */
void print_binary(unsigned long int n)
{
	int j, iterat = 0;
	unsigned long int now;

	for (j = 63; j >= 0; j--)
	{
		now = n >> j;

		if (now & 1)
		{
			_putchar(49);
			iterat++;
		}
		else if (iterat)
			_putchar(48);
	}
	if (!iterat)
		_putchar(48);
}
