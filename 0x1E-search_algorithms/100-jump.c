#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using
 *		   the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 *         -1 if value is not present or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	start = 0;
	end = sqrt(size);

	if (!array || size == 0)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	if (array[start] == value)
		return (start);

	while (array[end] <= value && start < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += sqrt(size);

		if (end > size - 1)
			end = size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
