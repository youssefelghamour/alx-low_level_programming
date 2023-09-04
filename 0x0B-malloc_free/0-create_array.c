#include "main.h"
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: stored char
 *
 * Return: pointer of an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));

	if (size == 0 || s == NULL)
		return (NULL);

	char *s = malloc(size * sizeof(char));

	for (int i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
