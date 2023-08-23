#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: input string
 *
 * Return: the string in leet
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || s[i] == (letters[j] + 32))
				s[i] = numbers[j];
		}
		i++;
	}

	return (s);
}
