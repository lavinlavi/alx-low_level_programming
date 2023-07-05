#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Deallocates a two-dimensional array
 * @grid: The 2D array to deallocate
 * @height: The number of rows in the 2D array
 */
void free_grid(int **grid, int height)
{
	int rowIndex;

	if (grid != NULL || height != 0)
	{
		for (rowIndex = 0; rowIndex < height; rowIndex++)
		{
			free(grid[rowIndex]);
		}
		free(grid);
	}
}

