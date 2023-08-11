#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible different
 *		combinations of two digits
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int start = 48;
	int end = 57;
	int i = 48;
	int j = 49;

	while (i <= end)
	{
		while (j <= end)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		start++;
		j = start;
		j++;
	}
	putchar('\n');
	return (0);
}
