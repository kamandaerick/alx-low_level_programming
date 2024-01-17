#include "search_algos.h"
/**
 * binary_search - Find the index of the value in an array
 * uing binary search algorithm
 * @array: the array in which to search
 * @size: the size of teh array
 * @value: the value to look for
 * Return: Return the index of the value or -1 if
 * array is NULL or value not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
