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
	int c;

	for (c = 0; s1[c] != '\0' && s2[c] != '\0'; c++)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}
		else
			return (0);
}
