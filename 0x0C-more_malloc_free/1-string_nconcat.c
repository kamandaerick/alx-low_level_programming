#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatenates two strings s1 and s2
* @s1: The first string
* @s2: the second string
* @n: The number of bytes from s2 to be added to s1
* Return: Returns a pointer to s1 after concatenation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;
	if (n < s2_len)
		p = malloc(sizeof(char)*s1_len + n + 1);
	else
		p = malloc(sizeof(char)*s1_len + s2_len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		p[i] = s1[i];
	while (n < s2_len && i < (s1_len + n))
		p[i++] = s2[j++];
	while (n > s2_len && i < (s1_len + s2_len))
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}
