#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 *
 * @dest: destination memory area
 * @src: memory area to be copied
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
