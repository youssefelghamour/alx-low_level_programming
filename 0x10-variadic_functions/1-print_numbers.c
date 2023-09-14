#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of ints passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	printf("%d", va_arg(ptr, int));

	for (i = 0; i < n - 1; i++)
	{
		printf("%s", separator);
		printf("%d", va_arg(ptr, int));
	}

	printf("\n");
	va_end(ptr);
}
