#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination input
 * @src: source input
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, ld = 0, ls = 0;

	while (dest[ld] != '\0')
		ld++;

	while (src[ls] != '\0')
		ls++;

	for (i = 0; i < ls; i++)
		dest[ld + i] = src[i];

	return (dest);
}
