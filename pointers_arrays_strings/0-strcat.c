#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 */

char *_strcat(char *dest, char *src)
{
	int str1;
	int str2;

	for (str1 = 0; dest[str1]; str1++)
		;
	for (str2 = 0; src[str2]; str2++)
	{
		dest[str1] = src[str2];
		str1++;
	}
	return (dest);
}
