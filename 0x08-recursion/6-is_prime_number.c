#include "main.h"

int is_prime(int n, int m);

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: input number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - checks if n is divible by numbers from 1 to n-1
 *
 * @n: int
 * @m: ints < n
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % n == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, m + 1));
}
