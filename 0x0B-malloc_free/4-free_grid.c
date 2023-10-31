#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the array of integers.
 * @grid: The array of integers to be freed.
 * @height: The height
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}

