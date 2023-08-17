#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= (size - i); k++)
			_putchar(' ');
		for (j = k; j <= size; j++)
			_putchar('#');
		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
