#!/usr/bin/python3

def island_perimeter(grid):

    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter += 4
                if grid[row-1][column] == 1:
                    perimeter -= 1
                if grid[row+1][column] == 1:
                    perimeter -= 1
                if grid[row][column-1] == 1:
                    perimeter -= 1
                if grid[row][column+1] == 1:
                    perimeter -= 1

    return perimeter
