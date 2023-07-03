#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int d, n;

	for (d = 0; d < 8; d++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[d][n]);
		}
		_putchar('\n');
	}
}
