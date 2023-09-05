#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a newly allocated space in memory
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = calloc(height, sizeof(int *));

	if (m == NULL)
	{
		free(m);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		m[i] = calloc(width, sizeof(int));

		if (m[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(m[i]);

			free(m);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			m[i][j] = 0;

	return (m);
}
