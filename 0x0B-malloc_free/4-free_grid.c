#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: second grid
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
