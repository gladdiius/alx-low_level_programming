#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0
    for first_scan in grid:
        for second_scan in first_scan:
            if second_scan == 1:
                perimeter += 2
    return perimeter + 2
