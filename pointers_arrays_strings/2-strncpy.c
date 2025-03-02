#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: pointa
 * @src: pointa
 * @n: them values
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpy = 0;

	while (src[cpy] != '\0' && cpy < n)
	{ 
		dest[cpy] = src[cpy];
		cpy++;
	}

	while (cpy < n)
	{
		dest[cpy] = '\0';
		cpy++;
	}

	return(dest);
}
