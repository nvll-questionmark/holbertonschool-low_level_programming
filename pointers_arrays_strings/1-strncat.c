#include "main.h"

/**
 * *_strncat - function to concatenate more
 * @dest: pointa
 * @src: pointa
 * @n: given value
 */

char *_strncat(char *dest, char *src, int n)
{
	int str1;
	int str2;

	for (str1 = 0; dest[str1]; str1++)
		;
	for (str2 = 0; src[str2] && str2 < n; str2++)
	{
		dest[str1] = src[str2];
		str1++;
	}
	return (dest);
}
