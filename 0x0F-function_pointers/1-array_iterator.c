#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 *		element of an array
 *
 * @array: array of numbers
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
