#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function
 * @grid: param
 * @height: param
 */

void free_grid(int **grid, int height)
{
	int leo;

	for (leo = 0; leo < height; leo++)
	{
		free(grid[leo]);
	}
	free(grid);
}
