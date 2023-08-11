#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible different
 *		combinations of two two-digit numbers
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int firstDigit = 0;
	int secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstDigit != 98 || secondDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
