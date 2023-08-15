#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar using _putchar prototype
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < sizeof(str))
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
