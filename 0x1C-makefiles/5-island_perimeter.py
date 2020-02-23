#!/usr/bin/python3
"""
    island
"""


def island_perimeter(grid):
    """ .... """
    cont = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                cont += chek_cont(i, j, grid)
    return cont


def chek_cont(i, j, grid):
    cont = 0
    height = len(grid) - 1
    width = len(grid[0]) - 1
    if i - 1 < 0 or grid[i - 1][j] == 0:
        cont += 1
    if i + 1 > height or grid[i + 1][j] == 0:
        cont += 1
    if j - 1 < 0 or grid[i][j - 1] == 0:
        cont += 1
    if j + 1 < width or grid[i][j + 1] == 0:
        cont += 1
    return cont
