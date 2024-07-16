#include "search_algos.h"
/**
* linear_search - searches for a value in an array of integers
* @array: array to search
* @size: size of the array
* @value: value to search for
* Return: index of the value in the array, or -1 if
* the value is not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
