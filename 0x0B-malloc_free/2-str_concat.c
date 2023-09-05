#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: input first string
 * @s2: input second string
 *
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	str = malloc((i + j + 1) * sizeof(char));

	if (str != NULL)
	{
		for (k = 0; k < i; k++)
			str[k] = s1[k];

		for (k = i; k < i + j; k++)
			str[k] = s2[k - i];
	}
	else
	{
		return (NULL);
	}

	return (str);
}
