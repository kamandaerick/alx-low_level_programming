#include "search_algos.h"
/**
* binary_search - searches for a value in an array of integers
* @array: array to search
* @size: size of the array
* @value: value to search for
* Return: index of the value in the array, or -1 if
* the value is not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;
	size_t i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (left <= right)
		{
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
			}
			printf("\n");
			middle = left + (right - left) / 2;
			if (array[middle] == value)
			{
				return (middle);
			}
			else if (array[middle] < value)
			{
				left = middle + 1;
			}
			else
			{
				right = middle - 1;
			}
						
		}
	return (-1);
}
