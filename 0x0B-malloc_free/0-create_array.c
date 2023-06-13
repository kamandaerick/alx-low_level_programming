#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: The size of the array
 * @c: The character to initialize with
 * Return: returns 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
