#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: input string
 */
void print_rev(char *s)
{
	int counter;
	char *a = s;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	s = a;

	for (counter--; counter >= 0; counter--)
		_putchar(*(s + counter));
	_putchar('\n');
}
