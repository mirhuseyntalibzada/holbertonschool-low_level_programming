#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the 2D array of integers initialized to 0.
 *         Returns NULL on failure or if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	i = 0;

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			j = 0;

			while (j < i)
			{
				free(grid[i]);
				j++;
			}
			free(grid);

			return (NULL);
		}

		i++;
	}

	return (grid);
}
