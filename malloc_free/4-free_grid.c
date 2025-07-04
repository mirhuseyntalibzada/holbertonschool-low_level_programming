#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The 2D grid to free.
 * @height: The height of the grid (number of rows).
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
