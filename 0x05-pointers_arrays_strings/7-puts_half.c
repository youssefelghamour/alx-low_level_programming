#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string
 */
void puts_half(char *str)
{
	int l = 0, i;

	while (str[l])
		l++;

	for (i = l / 2; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
