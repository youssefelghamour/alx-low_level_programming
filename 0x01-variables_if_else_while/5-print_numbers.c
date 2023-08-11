#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints base 10 numbers starting from 0
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
