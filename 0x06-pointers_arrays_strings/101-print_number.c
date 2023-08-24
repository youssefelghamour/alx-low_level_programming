#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: input int
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int reversed = 0;

	while (n != 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	while (reversed != 0)
	{
		_putchar(reversed % 10 + '0');
		reversed /= 10;
	}
}
