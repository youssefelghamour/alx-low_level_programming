#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - detects if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	if (l <= 1)
		return (1);

	return (is_palindrome_recursive(s, 0, l - 1));
}

/**
 * is_palindrome_recursive - detetcts if a substring is a palindrome
 *
 * @s: string
 * @start: start of substring
 * @end: end of substring
 *
 * Return: 1 if the substring is a palindrome, 0 if not
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_recursive(s, start + 1, end - 1));
}
