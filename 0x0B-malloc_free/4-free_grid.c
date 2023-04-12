#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - The function frees the 2-D array created previously
 * @grid: The 2-D gridn wose memory to be freed
 * @height: The height of the grid
 * Return: Does not return anything since it is void function
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
