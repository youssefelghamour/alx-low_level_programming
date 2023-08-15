#include "main.h"

/**
 * main - Entry point
 *
 * Description: function that prints the alphabet, in lowercase,
 *		followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int start = 97;
	int end = 122;

	while (start < end + 1)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
