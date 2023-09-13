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
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if ((strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0
				&& strcmp(argv[2], "*") != 0
				&& strcmp(argv[2], "/") != 0
				&& strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}

	if (((strcmp(argv[2], "/") == 0) || strcmp(argv[2], "%") == 0)
			&& (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	int result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);

	return (0);
}
