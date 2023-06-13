#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - This function returns a pointer to an allocated memory
 * containing a copy of the string given as a parameter
 * @str: The string given
 * Return: returns NULL if str=NULL or if memory is insufficient
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr = malloc(sizeof(char) * i);
		if (ptr == NULL)
			return (NULL);
		for (j = 0; str[j] != '\0'; j++)
			ptr[j] = str[j];
	}
	return (ptr);
}
