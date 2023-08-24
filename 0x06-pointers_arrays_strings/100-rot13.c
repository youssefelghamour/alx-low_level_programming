#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: input string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int j, i = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
