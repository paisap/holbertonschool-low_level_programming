#!/usr/bin/python3
def island_perimeter(grid):
    cont = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j + 1] == 0:
                    cont += 1
                if grid[i][j - 1] == 0:
                    cont += 1
                if grid[i + 1][j] == 0:
                    cont += 1
                if grid[i -1][j] == 0:
                    cont += 1
    return cont
