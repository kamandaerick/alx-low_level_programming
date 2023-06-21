#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - This function searches for an integer
 * @array: The array of integers on which to search
 * @size: The number of elements in the array
 * @cmp: Function that compares array values
 * Return: Returns the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
