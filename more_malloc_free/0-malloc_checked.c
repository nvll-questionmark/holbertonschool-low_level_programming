#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates mem using malloc
 * @b: bytes
 *
 * Return: pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
