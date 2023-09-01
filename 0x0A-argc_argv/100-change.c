#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *	of money
 *
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, sum = 0, n = 0;

	if (argc > 1)
	{
		n = atoi(argv[1]);
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; n >= 25; i++)
				n -= 25;
			for (j = 0; n >= 10; j++)
				n -= 10;
			for (k = 0; n >= 5; k++)
				n -= 5;
			for (l = 0; n >= 2; l++)
				n -= 2;
			for (m = 0; n >= 1; m++)
				n -= 1;
			sum += i + j + k + l + m;
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
