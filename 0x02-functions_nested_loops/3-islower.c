#include "main.h"

/**
 * _islower - checks if a chracter 'c' is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return:- returns 1 if 'c' is lowercase
 *		returns 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
