#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98
 *
 * @n: input number
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
