#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that return pointer to two dimensional array of ints
 * @width: matrix width
 * @height: matric height
 *
 * Return: Supa pointa
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		p[i] = (int *) malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= i; ++j)
				free(p[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
