#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array:array of integers
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp doesn't return 0
 *	If no element matches, return -1
 *	If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
