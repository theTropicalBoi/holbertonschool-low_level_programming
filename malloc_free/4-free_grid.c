#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Free up a 2 dimensional grid.
 * @grid: The grid to free.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
