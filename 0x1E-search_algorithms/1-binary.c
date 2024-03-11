#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: the array to print
 * @size: the size of the array
 */
void print_array(int *array, size_t size)
{
	int i = 0;

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
	if (!array || size == 0)
		return (-1);

	print_array(array, size);

	size_t mid = (size - 1) / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
	{
		/**
		 * mid + 1 is added to account for the elements
		 * discarded in the left subarray
		 */
		return (binary_search(array + (mid + 1), size - (mid + 1), value) + mid + 1);
	}

	if (array[mid] > value)
		return (binary_search(array, mid, value));

	return (-1);
}
