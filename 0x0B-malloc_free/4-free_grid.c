#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  2d arr
 * @grid: grid 2d
 * @height: height d_grid
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
