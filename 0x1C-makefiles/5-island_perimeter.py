#!/usr/bin/python3
"""A module that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Function that returns the perimeter of the island in grid."""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += surrounding_water(grid, i, j)

    return (perimeter)


def surrounding_water(grid, i, j):
    """Function that returns num of surrounding water a cell has in a grid."""

    water = 0

    if i <= 0 or not grid[i - 1][j]:
        water += 1

    if j <= 0 or not grid[i][j - 1]:
        water += 1

    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        water += 1

    if i >= len(grid) - 1 or not grid[i + 1][j]:
        water += 1

    return (water)
