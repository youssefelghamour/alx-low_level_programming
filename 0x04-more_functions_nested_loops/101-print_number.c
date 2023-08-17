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
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n <= 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + 48);
}
