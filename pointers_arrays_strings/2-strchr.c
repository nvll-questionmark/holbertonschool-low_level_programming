#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: search
 * @c: char
 *
 * Return: 0
 */

char *strchar(char *s, char c)
{
	//no initialization needed since s is already a declared argument
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s ==c)
	{
		return (s);
	}
	return (0);
}
