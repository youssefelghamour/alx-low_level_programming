#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints numbers of base 16 in lower case
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int numbermin = 48;
	int numbermax = 57;
	int lowermin = 97;
	int lowermax = 102;

	while (numbermin <= numbermax)
	{
		putchar(numbermin);
		numbermin++;
	}
	while (lowermin <= lowermax)
	{
		putchar(lowermin);
		lowermin++;
	}
	putchar('\n');
	return (0);
}
