#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the allocated space
 * @grid: the 2D array
 * @height: length of array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;
	
	if (grid == NULL)
		free(grid);
	if (height <= 0)
		free(grid);
	for (n = 0; n <= height; n++)
		free(grid[n]);
	free(grid);
}
