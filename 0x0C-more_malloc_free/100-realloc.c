#include "main.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size:  the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to a new array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
	}

	return (p);
}
