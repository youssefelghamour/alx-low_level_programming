#include "main.h"

/**
 * _isupper - checks if a chracter 'c' is uppercase
 *
 * @c: The character in ASCII code
 *
 * Return:- returns 1 if 'c' is uppercase
 *		returns 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
