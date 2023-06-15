#include "main.h"
#include <stdlib.h>
/**
 * _realloc - This function reallocates a memory block
 * @old_size: The allocated space in bytes
 * @new_size: The new allocated memory in bytes
 * @ptr: Pointer to the previously allocated memory
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size);
	free(ptr);
	if (new_size > old_size)
		ptr = NULL;
	if (new_size == old_size)
		return (ptr);
	ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (ptr);
}
