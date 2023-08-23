#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, ld = 0, ls = 0;

	while (dest[ld] != '\0')
		ld++;

	for (i = 0; i < n; i++)
		dest[ld + i] = src[i];

	return (dest);
}
