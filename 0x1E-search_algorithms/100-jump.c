#include <stdio.h>
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value in the array, or -1 if the value is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, start, end, prev, i = 0;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	prev = 0;
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}
	start = prev - step;
	end = prev < size ? prev : size;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i < end && array[i] <= value; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
