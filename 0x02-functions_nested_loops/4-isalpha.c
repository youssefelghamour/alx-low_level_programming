#include "main.h"

/**
 * _isalpha - checks if a chracter 'c' is a letter
 *
 * @c: The character in ASCII code
 *
 * Return: returns 1 if 'c' is a letter
 *		returns 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
