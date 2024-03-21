#!/usr/bin/python3
"""island function"""


def island_perimeter(grid):
    """the perimiter"""
    w = len(grid[0])
    h = len(grid)
    e = 0
    s = 0

    for x in range(h):
        for y in range(w):
            if grid[x][y] == 1:
                s += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    e += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    e += 1
    return s * 4 - e * 2
