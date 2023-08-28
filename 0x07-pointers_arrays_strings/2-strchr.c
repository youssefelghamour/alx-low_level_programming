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
	int i = 0, l = 0;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		if (s[i] == c)
			return (s + i);

	return ('\0');
}
