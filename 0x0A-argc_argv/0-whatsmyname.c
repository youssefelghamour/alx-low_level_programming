#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array that containing the command line arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);

	return (0);
}
