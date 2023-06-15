#include "main.h"
#include <stdlib.h>
/**
 * array_range - This function creates an array of integers
 * @min: Minimum range of array elements
 * @max: maximum range of the array elemenst
 * Return: Returns a pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int *range;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		range[i] = min + i;
	}
	return (range);
}
