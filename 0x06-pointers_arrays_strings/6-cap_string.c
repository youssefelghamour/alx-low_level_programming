#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: input string
 *
 * Return: String with capitalized words
 */

char *cap_string(char *s)
{
	int l = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[l] != '\0')
	{
		if (s[l] == ' ' || s[l] == ',' || s[l] == ';' ||
			s[l] == '.' || s[l] == '!' || s[l] == '?' ||
			s[l] == '"' || s[l] == '(' || s[l] == ')' ||
			s[l] == '{' || s[l] == '}' || s[l] == '\t' ||
			s[l] == '\n')
		{
			l++;

			if (s[l] >= 'a' && s[l] <= 'z')
				s[l] -= 32;
		}
		else
		{
			l++;
		}
	}

	return (s);
}
