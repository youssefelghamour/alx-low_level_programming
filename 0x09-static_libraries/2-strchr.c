#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: the pointer to the first occurrence of the character c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
