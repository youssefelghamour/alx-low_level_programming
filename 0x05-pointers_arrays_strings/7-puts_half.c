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

	if ((l % 2) == 0)
		i = l / 2;
	else
		i = (l / 2) + 1;

	for (; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
