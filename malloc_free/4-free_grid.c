#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the gid G
 *
 * @grid: grid to free
 * @height: how tall it iz G
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);

	free(grid);
}
