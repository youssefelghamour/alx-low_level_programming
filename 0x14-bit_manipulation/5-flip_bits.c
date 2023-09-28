#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip to get from one number to
 * another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int i = 0;

	while (x)
	{
		if (x & 1)
			i++;
		x = x >> 1;
	}

	return (i);
}
