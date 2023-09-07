#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i = 0, size;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	size = l1 + n + 1;

	if (n >= l2)
		size = l1 + l2 + 1;

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (i = 0; i < n && s2[i] != '\0'; i++)
		str[l1 + i] = s2[i];

	str[l1 + i] = '\0';

	return (str);
}
