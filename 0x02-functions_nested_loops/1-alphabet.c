#include "main.h"

/**
 * print_alphabet - prints alphabets
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
