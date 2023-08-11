#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the alphabets in lowercase & uppercase
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int lowermin = 97;
	int lowermax = 122;
	int uppermin = 65;
	int uppermax = 90;

	while (lowermin <= lowermax)
	{
		putchar(lowermin);
		lowermin++;
	}
	while (uppermin <= uppermax)
	{
		putchar(uppermin);
		uppermin++;
	}
	putchar('\n');
	return (0);
}
