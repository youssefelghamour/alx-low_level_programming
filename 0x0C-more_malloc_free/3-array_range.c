#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i] = i;

	return (p);
}
