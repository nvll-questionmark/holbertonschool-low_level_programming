#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to the buffer pointed by dest
 * @dest: pointer
 * @src: string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int rev = 0;
	int i;

	while (src[rev] != '\0')
	{
		rev++;
	}

	for (i = 0; i < rev; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
