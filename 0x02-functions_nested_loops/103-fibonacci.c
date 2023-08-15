#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the add even-valued
 *		fibonacci numbers below 4000000
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int a, b, c, s;

	a = 1;
	b = 2;
	c = s = 0;
	for (i = 0; i < 48; i++)
	{
		while (c < 4000000)
		{
			c = a + b;
			a = b;
			b = c;
			if ((c % 2) == 0)
			{
				s = s + c;
			}
		}
	}
	printf("%ld\n", s);
	return (0);
}
