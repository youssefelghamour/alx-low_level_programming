#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints all possible different
 *		combinations of three digits
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int start = 48;
	int end = 57;
	int i = 48;
	int j = 49;
	int k = 50;

	while (i <= end)
	{
		while (j <= end)
		{
			while (k <= end)
			{
				if (i != j && j != k && i != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 56 || j != 57 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		start++;
		j = start + 1;
		k = i + 1;
	}
	putchar('\n');
	return (0);
}
