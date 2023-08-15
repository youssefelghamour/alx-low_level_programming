#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting from 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int j, k;
	long int numb[i];

	numb[0] = 0;
	numb[1] = 1;

	for (i = 2; i < 48; i++)
	{
		k = numb[i - 1];
		j = numb[i - 2];
		numb[i] = j + k;
		if (numb[i] != 1)
		{
			printf(", ");
		}
		printf("%ld", numb[i]);
	}

	printf("\n");
	return (0);
}
