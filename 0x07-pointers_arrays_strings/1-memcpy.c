#include "main.h"
/**
 * _memcpy - This function copies a block of memory from src to dest
 * @dest: The memory to which the the copied memory is added
 * @src: The memory to be coped
 * @n: Amount of memory to be copied in bytes
 *
 * Return: Returns a pointer dest to the function
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
