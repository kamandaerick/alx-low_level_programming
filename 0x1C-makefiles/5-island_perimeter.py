#!/usr/bin/python3
"""This script defines a function that calculates and returns the perimeter of an island"""

def island_perimeter(grid):
    """Calculate and return the perimeter of an island"""

    perimeter = 0
    cols = len(grid[0])
    rows = len(grid)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if j < cols - 1 and grid[i][j+1] == 1:
                    perimeter -= 1
                if i < rows - 1 and grid[i+1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 1
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 1

    return perimeter
