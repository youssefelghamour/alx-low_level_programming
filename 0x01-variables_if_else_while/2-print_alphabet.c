#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the alphabets in lower case
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int start = 97;
	int end = 122;

	for (int i = start; i <= end; i++)
	{
		putchar(i);
	}
	return (0);
}
