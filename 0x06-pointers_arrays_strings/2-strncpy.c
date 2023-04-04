#include "main.h"
/**
 * _strncpy - This function copies n numbers of src to dest
 * @dest: This is the destination string
 * @src: This is the source string
 * @n: This is the number of letter/values from src to be copied to dest
 * Return: Returns dest to the _strncpy function
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
