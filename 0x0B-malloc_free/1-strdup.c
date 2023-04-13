#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - copies a string to the allocated memory and returns it
 * @str: The string to be copied
 * Return: Returns apointer to the string on success and NULL on fail
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr);
}

