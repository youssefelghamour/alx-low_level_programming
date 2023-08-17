#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: input integer.
 *
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int m = n;

	if (m < 0)
	{
		m = -m;
		_putchar('-');
	}
	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + 48);
}
