#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints 0 to 10 using putchar
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
		start++;
	}
	putchar('\n');
	return (0);
}
