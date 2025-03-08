#include "main.h"

/**
 * _strpbrk - funtion that searches a string for any set of bytes
 * @s: pointa
 * @accept: pointa
 *
 * Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			++a;
		}
		++s;
	}
	return (0);
}
