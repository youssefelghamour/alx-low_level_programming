#include "main.h"

/**
 * _isdigit - checks if a chracter 'c' is a digit 0-9
 *
 * @c: The character in ASCII code
 *
 * Return:- returns 1 if 'c' is a digit
 *		returns 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
