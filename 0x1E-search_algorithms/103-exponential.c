#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: the array to print
 * @begin: index of the beginning of the subarray
 * @end: index of the end of the subarray
 */
void print_array(int *array, int begin, int end)
{
	int i = 0;

	printf("Searching in array: ");

	for (i = begin; i <= end; i++)
	{
		printf("%d", array[i]);

		if (i < end)
			printf(", ");
	}

	printf("\n");
}

/**
 * binary_search_subarray - searches for a value in a sorted subarray of
 *			    integers using the Binary search algorithm
 *
 * @array: the array to search in
 * @begin: index of the beginning of the subarray
 * @end: index of the end of the subarray
 * @value: the value to search for
 *
 * Return: the index where value is located
 *         -1 if value is not present or if array is NULL
 */
int binary_search_subarray(int *array, int begin, int end, int value)
{
	int mid;

	if (!array)
		return (-1);

	while (begin <= end)
	{
		mid = begin + (end - begin) / 2;

		print_array(array, begin, end);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			begin = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 *			integers using the Exponential search algorithm
 *
 * @array: the array to search in
 * @size: the number of element in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 *         -1 if value is not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			i / 2, i < size ? i : size - 1);

	return (binary_search_subarray(array, i / 2, i < size ? i : size - 1, value));
}
