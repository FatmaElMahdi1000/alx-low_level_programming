#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid.
"""

def island_perimeter(grid):
    """
    Function that calculates the perimeter of an island in a grid.

    Args:
    grid (list of list of int): 2D grid where 1 represents land and 0 represents water.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0

    # Loop through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check all four sides (up, down, left, right)
                # If the cell is on the edge or next to water, it contributes to the perimeter
                if i == 0 or grid[i-1][j] == 0:  # Check top
                    perimeter += 1
                if i == len(grid) - 1 or grid[i+1][j] == 0:  # Check bottom
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:  # Check left
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:  # Check right
                    perimeter += 1

    return perimeter

