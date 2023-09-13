#include "function_pointers.h"
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != a - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
