#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if are identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
