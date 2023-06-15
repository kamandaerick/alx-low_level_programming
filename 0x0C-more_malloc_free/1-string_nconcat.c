#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - This function concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes to be concatenated from s2
 * Return: Returns NULL on fail or pointer to the new
 * concatenated string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;
	if (n < s2_len)
		ptr = malloc(sizeof(char) * (s1_len + n + 1));
	else
		ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[s1_len + i] = s2[i];
	ptr[s1_len + n] = '\0';
	return (ptr);
}
