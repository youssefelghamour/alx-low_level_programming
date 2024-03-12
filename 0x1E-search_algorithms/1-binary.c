#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: the array to print
 * @size: the size of the array
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i != size - 1)
			printf(", ");
	}

	printf("\n");
}


/**
 * binary_search - searches for a value in a sorted array of integers using
 *		   the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 *         -1 if value is not present or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, mid;

	l = 0;
	r = size - 1;

	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		print_array(array + l, r - l + 1);

		mid = (l + r) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
