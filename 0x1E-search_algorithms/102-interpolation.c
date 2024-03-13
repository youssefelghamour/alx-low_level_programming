#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 *		   the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 *         -1 if value is not present or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos, range, step;

	low = 0;
	high = size - 1;

	if (!array || size == 0)
		return (-1);

	while (low <= high)
	{
		range = (array[high] - array[low]);
		step = (value - array[low]);
		pos = low + (((double)(high - low) / range) * step);

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
