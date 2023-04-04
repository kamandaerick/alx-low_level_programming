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
	int dest_length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_length++;
	for (i = 0; i < n; i++)
		dest[dest_length + i] = src[i];
	return (dest);
}
