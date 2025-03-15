#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of ints
 * @min: minimum rnage
 * @max: maximun range
 *
 * Return: pointa
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; ++i)
		p[i] = min++;

	return (p);
}
