#include "main.h"

/**
 * malloc_checked - allocates memory
 *
 * @b: int
 *
 * Return: pointer to the allocated memory
 * if malloc fails, it causes normal process termination
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
