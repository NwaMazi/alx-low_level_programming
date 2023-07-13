#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this program frees 2D array
 * @grid: 2D grid
 * @height: dimension of grid
 * Description: frees memory
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
