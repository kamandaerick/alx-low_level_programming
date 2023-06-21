#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - This function executes a function gives as a parameter
 * on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: The function passed as an argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
