#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the alphabets except e and q
 *
 * Return: 0 (correct)
 */

int main(void)
{
	int start = 97;
	int end = 122;

	while (start <= end)
	{
		if (start != 101 && start != 113)
		{
			putchar(start);
		}
		start++;
	}
	putchar('\n');
	return (0);
}
