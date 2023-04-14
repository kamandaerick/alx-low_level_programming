#include <stdlib.h>
#include "main.h"
/**
 * *array_range - Creates an array of integers from min to max
 * @min: The min integer in the array
 * @max: The max integer in the array
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = (int *)malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
