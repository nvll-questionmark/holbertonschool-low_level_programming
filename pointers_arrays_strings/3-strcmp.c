#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: initial value
 * @s2: initial value
 *
 * Return: 0 if s1=s2, more than 0 if s1>s2, less than 0 if s1>s2
 */

int _strcmp(char *s1, char s2)
{
	while (*s1 == *s2)
	{
		if (s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
