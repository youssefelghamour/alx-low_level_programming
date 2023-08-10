#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: C program that write a string to the standard error
 *		without using puts or printf
 *
 * Return: 1 (error)
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, sizeof(string) - 1);
	return (1);
}
