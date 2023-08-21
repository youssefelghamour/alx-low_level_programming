#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: input string
 */
void print_rev(char *s)
{
	int counter;

	for (counter = _strlen(s); counter >= 0; counter--)
		_putchar(*(s + counter));
	_putchar('\n')
}
