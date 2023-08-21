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
	int l = 0, i;

	while (src[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		dest[i] = src[i];

	return (dest);
}
