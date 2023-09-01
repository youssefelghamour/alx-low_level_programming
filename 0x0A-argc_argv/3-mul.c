#include <stdio.h>
#include <stdlib.h>

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
	int count;
	int mul = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			mul *= atoi(argv[count]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
