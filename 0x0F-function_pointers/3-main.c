#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char operator = argv[2][0];

	if (operator != '+' && operator != '-'
			&& operator != '*'
			&& operator != '/'
			&& operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	int result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
