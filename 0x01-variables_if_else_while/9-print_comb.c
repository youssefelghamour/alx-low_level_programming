#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all cominations of single-digit number
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int start = 48;
	int end = 57;

	while (start <= end)
	{
		putchar(start);
		if (start != 57)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');
	return (0);
}
