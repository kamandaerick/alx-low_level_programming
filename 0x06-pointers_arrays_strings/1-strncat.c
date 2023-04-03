#include "main.h"
/**
 * _strncat - This function concatenates two strings using strncat
 * @dest: This is the destination on which the second string will be appnded
 * @src: This is the source string to append on dest
 * @n: The number of characters from src to append to dest
 * Return: Return the final value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_length++;
	for (i = 0; src[i] != '\0'; i++)
		src_length++;
	for (i = 0; i < n; i++)
		dest[dest_length] = src[i];
	return (dest);
}
