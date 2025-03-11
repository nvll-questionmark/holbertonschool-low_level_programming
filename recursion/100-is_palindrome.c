#include "main.h"

int ver_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: given variable
 *
 * Return: 1 is yes, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (ver_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns leng of str
 * @s: str
 *
 * Return: len
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * ver_pal - verifies the chars recursively for palindrome
 * @s: string
 * @i: iterate
 * @len: length
 *
 * Return: 1 if pal, 0 if not
 */

int ver_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (ver_pal(s, i + 1, len - 1));
}
