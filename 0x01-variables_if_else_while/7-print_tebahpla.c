#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the alphabets in lower case in reverse
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int start = 122;
	int end = 97;

	while (start >= end)
	{
		putchar(start);
		start--;
	}
	putchar('\n');
	return (0);
}
