#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free_grid - use free function on previous grid
 * @grid: 2 dim. array to free
 * @height: input height (size)
 *
 * Return: free'd grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
