#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: input integer.
 *
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		m = -m;
		_putchar('-');
	}
	if ((m / 10) > 0)
		print_number(m / 10);

	_putchar((m % 10) + 48);
}

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - 48);
		else if (result > 0)
			break;
	} while (*s++);

	return (result * sign);
}

/**
 * _puts - prints a string
 *
 * @str: input string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * main - multiplies two numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		print_number(_atoi(argv[1]) * _atoi(argv[2]));
		_putchar('\n');
	}
	else
	{
		_puts("Error\n");
		exit(98);
	}

	return (0);
}
