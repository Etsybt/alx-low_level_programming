#!/usr/bin/python3
"""Returns a grid"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.

    ARG:
        grid(int): list of list of integers.
    """
    p = 0
    row = len(grid)
    column = len(grid[0])

    for n in range(row):
        for m in range(column):
            if grid[n][m] == 1:
                p += 4

                if n > 0 and grid[n - 1][m] == 1:
                    p -= 2
                if m > 0 and grid[n][m - 1] == 1:
                    p -= 2
    return (p)
