#!/usr/bin/python3

'''This script defines a function that calculates and returns the perimeter of an island'''

def island_perimeter(grid):
    """Calculate and return the perimeter of an island"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i][j+1] == 1:
                    perimeter -= 1
                if grid[i+1][j] == 1:
                    perimeter -= 1
                if grid[i][j-1] == 1:
                    perimeter -= 1
                if grid[i-1][j] == 1:
                    perimeter -= 1

    return perimeter
