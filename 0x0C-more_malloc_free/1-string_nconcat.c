#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - This function concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to be concatenated
 * Return: Returns a pointer to the concatenated string on sucess
 * and NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;
	if (n >= s2_len)
		ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
	else
		ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < s1_len)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < s2_len && i < (s1_len + n))
		ptr[i++] = s2[j++];

	while (n >= s2_len && i < (s1_len + s2_len))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
