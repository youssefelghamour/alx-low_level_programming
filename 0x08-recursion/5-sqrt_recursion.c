#include "main.h"

int square(int n, int sqr);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - returns the square root of a number
 *
 * @n: input number
 * @sqr: square root
 *
 * Return: the square root
 */

int square(int n, int sqr)
{
	if ((sqr * sqr) == n)
		return (sqr);
	else if ((sqr * sqr) < n)
		return (square(n, sqr + 1));
	else
		return (-1);
}
