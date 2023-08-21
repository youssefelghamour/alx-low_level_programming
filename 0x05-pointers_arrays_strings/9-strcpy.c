#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i])
		++i;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
