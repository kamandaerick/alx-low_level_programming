#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @m: memory area to be filled
 * @c: The  character  to copy
 * @n: number of times to copy the character
 * * Return: pointer to the memory area s
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		m[i] = c;
	return (m);
}
/**
 * *_calloc - allocates memory for a given array
 * @nmemb: number of elements the array contains
 * @size: size of each element of the array
 * Return: returns a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}

