#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: initial string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 *		or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			/**
			 * keep looping if the characters match
			 */
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return ('\0');
}
