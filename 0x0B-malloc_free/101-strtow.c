#include "main.h"
#include <string.h>
/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0, j = 0, pos = 0;
	char **p;
	int l = strlen(str);

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	p = malloc((l + 1) * sizeof(char *));
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
				return (NULL);
			for (j = 0; j < word_length; j++)
				p[pos][j] = str[i + j];
			p[pos][j] = '\0';
			pos++;
			i += word_length;
		}
	}
	p[pos] = '\0';
	return (p);
}
