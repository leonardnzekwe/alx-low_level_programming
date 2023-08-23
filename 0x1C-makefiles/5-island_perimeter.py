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
    col_index = None
    length = None
    width = None
    for row in grid:
        for index, item in enumerate(row):
            if item == 1:
                col_index = index
                break
    if col_index:
        length = get_length(grid, col_index)
        width = get_width(grid)

    if length and width:
        perimeter = (length * 2) + (width * 2)
    return perimeter


def get_length(grid, col_index):
    """
    get_length function:
    that return the length of the grid
    """
    row_list = []
    length = 0
    for row in grid:
        row_list.append(row[col_index])
    if row_list:
        length_top = row_list.index(1)
        length_bottom = len(row_list) - 1 - row_list[::-1].index(1)
        length = len(row_list[length_top:length_bottom + 1])
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
