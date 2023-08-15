#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: int input
 *
 * Return: returns 1 if 'n' is positive
 *		returns 0 if zero
 *		returns -1 if negtive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
