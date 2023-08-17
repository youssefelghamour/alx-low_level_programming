#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		while ((n % i) == 0)
		{
			n = n / i;
		}
	}

	printf("%ld\n", i - 1);
	return (0);
}
