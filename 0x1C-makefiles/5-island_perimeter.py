#!/usr/bin/python3
"""function for isalnd"""

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the grid is not rectangular or exceeds the maximum width and height.

    """

    if not all(len(row) == len(grid[0]) for row in grid) or len(grid) > 100 or len(grid[0]) > 100:
        raise ValueError("Invalid grid dimensions")

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
