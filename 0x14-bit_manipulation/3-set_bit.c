#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer of an unsigned long int
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= sizeof(*n) * 8)
		return (-1);

	m = 1 << index;

	*n = *n | m;

	return (1);
}
