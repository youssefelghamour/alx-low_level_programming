#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: input string
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count += 2;
	}
}
