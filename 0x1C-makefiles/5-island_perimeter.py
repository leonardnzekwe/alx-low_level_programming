#!/usr/bin/python3
"""
island_perimeter(grid) Module:
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    island_perimeter function:
    that returns the perimeter of the island described in grid
    """
    perimeter = 0
    if grid:
        length = get_length(grid)
        width = get_width(grid)
        perimeter = (length * 2) + (width * 2)
    return perimeter


def get_length(grid):
    """
    get_length function:
    that return the length of the grid
    by turning the columns in the grid into rows,
    getting the transposed row with the highest count of (1)
    and then returning the count of (1) i.e top_width for that top_row
    """
    length = 0
    new_grid = []

    for col_index in range(len(grid[0])):
        new_row = []
        for row_index in range(len(grid)):
            new_row.append(grid[row_index][col_index])
        new_grid.append(new_row)
    if new_grid:
        length = get_width(new_grid)
    return length


def get_width(grid):
    """
    get_width function:
    that return the width of the grid
    by getting the grid row with the highest count of (1)
    and then returning the count of (1) i.e top_width for that top_row
    """
    top_width = -1
    top_row = -1

    for row_index, row in enumerate(grid):
        new_width = row.count(1)
        if new_width > top_width:
            top_width = new_width
            top_row = row_index
    return top_width
