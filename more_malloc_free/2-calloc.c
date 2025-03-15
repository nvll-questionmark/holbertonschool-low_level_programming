#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates mem for a arr
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: pointa to the alloc mem, NULL if fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int bytes;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;
	p = malloc(bytes);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < bytes; ++i)
	{
		p[i] = 0;
	}
	return (p);
}
