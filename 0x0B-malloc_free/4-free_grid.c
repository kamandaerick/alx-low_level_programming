#include "main.h"
#include <stdlib.h>
/**
 * free_grid - This function frees the memory allocated to grid
 * @grid: The 2-D array whose memory is to be freed
 * @height: The height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
