#include "main.h"

/**
 * free_grid - frees a 2 dimensional array
 *
 * @grid: 2D array of ints
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
