#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: area to fill
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
