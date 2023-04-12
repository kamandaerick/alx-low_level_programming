#include <stdlib.h>
#include "main.h"
/**
 * create_array - The function creates an array of size size and
 * assigns it the character c
 * @size: This is the size of the array
 * @c: This is the character to assign
 * Return: Returns a pointer to an array on success and NULL on fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);

}

