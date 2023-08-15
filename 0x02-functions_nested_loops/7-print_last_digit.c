#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: int input
 *
 * Return: absolute of n % 10
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
