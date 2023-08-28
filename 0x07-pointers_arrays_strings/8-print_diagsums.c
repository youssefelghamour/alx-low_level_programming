#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *			of a square matrix of ints
 *
 * @a: input pointer
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i = 0, s1 = 0, s2 = 0;

	for (int i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
		s2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, ", s1);
	printf("%d", s2);
	printf("\n");
}
