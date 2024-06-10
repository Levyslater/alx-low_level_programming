#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Retuurns the perimeter of an island
    """
    width = len(grid[0])
    height = 0
    sides = 0
    edges = 0

    for val in grid:
        height += 1
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                sides += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return ((sides * 4) - (edges * 2))
