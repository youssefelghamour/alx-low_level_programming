#include "main.h"
#include <string.h>

/**
 * space - checks if a string contains only spaces
 * @str: input string
 * Return: 1 if string contains only spaces, 0 otherwise
 */
int space(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			;
		else
			return (0);
	}

	return (1);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k, l = 0, pos = 0;
	char **p;

	if (str[0] == '\0' || str == NULL || space(str))
		return (NULL);

	while (str[l] != '\0')
		l++;
	p = malloc((l + 2) * sizeof(char *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ')
		{
			int word_length = 0;

			while (str[i + word_length] != ' '
					&& str[i + word_length] != '\0')
				word_length++;
			p[pos] = malloc((word_length + 1) * sizeof(char));
			if (p[pos] == NULL)
			{
				for (k = 0; k < pos; k++)
					free(p[k]);
				free(p[k]);
				free(p);
				return (NULL);
			}
			for (j = 0; j < word_length; j++)
				p[pos][j] = str[i + j];
			p[pos][j] = '\0';
			pos++;
			i += word_length;
		}
	}
	p[pos] = NULL;
	return (p);
}
