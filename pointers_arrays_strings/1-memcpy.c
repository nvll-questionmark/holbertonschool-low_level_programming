#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination pointa
 * @src: source pointa
 * @n: bytes to copy
 *Return: dest pointa
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
