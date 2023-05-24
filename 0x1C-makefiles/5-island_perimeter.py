#!/usr/bin/python3
"""This file is to calculates the perimeter of an island in a grid."""


def water_nei(grid, a, b):
    """Returns the number of water neighbors a cell has in a grid."""

    i = 0

    if a <= 0 or not grid[a - 1][b]:
        i += 1
    if b <= 0 or not grid[a][b - 1]:
        i += 1
    if b >= len(grid[a]) - 1 or not grid[a][b + 1]:
        i += 1
    if a >= len(grid) - 1 or not grid[a + 1][b]:
        i += 1
    return i


def island_perimeter(grid):
    """calculates the perimeter of the island in grid"""

    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                p += water_nei(grid, i, j)
    return p
