#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: pointa
 * @accept: pointa
 *
 * Return: number of bytes int he initial segment
 */

unisgned int _strspn(char *s, char *accept)
{
	unsigned int l;
	int i;

	l = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				++l;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (l);
		}
		++s;
	}
	return (l);
}
