#include "main.h"

/**
 * _strdup - duplicates a string given to it
 *
 * @str: string
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	s = malloc((size + 1) * sizeof(char));

	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = str[i];
	}
	else
	{
		return (NULL);
	}

	return (s);
}
