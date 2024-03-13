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
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 *
 * @array: the array to search in
 * @left: left index of the subarray
 * @right: right index of the subarray
 * @value: the value to search for
 *
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array + left, right - left + 1);

	mid = (right + left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (advanced_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, right, value));
	else
		return (advanced_binary_recursive(array, left, mid, value));
}

/**
 * advanced_binary - advanced binary search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
