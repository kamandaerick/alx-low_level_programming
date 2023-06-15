#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - This function allocates memory for an array using calloc
 * @nmemb: An array of elements for which memory is to be allocates
 * @size: Size of memory to be allocated
 * Return: Returns a pointer to the allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
