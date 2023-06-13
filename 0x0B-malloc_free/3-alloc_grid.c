#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This function returns a pointer to 2-D array of ints
 * @width: The width of the array (grid)
 * @height: The height of the array (grid)
 * Return: Returns NULL on failure of if arguments are negative
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	free(grid);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		free(grid[i]);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
