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
	int i, l = 0;

	while (dest[l] != '\0')
		l++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];

	dest[l + i] = '\0';

	return (dest);
}
