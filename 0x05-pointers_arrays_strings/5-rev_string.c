#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: input string
 */
void rev_string(char *s)
{
	int i, l = 0;
	char temp;

	while (s[l])
		l++;

	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
