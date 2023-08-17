#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= n; i++)
	{
		for (k = 1; k <= (n - i), k++)
			_putchar(' ');
		for (j = k; j <= n; j++)
			_putchar('#');
		if (i < n)
			_putchar('\n');
	}
	_putchar('\n');
}
