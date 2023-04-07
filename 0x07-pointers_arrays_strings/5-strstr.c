#include "main.h"
/**
 * _strstr - The function locates a substring in a given string
 * @haystack: The string in which to search for the substring
 * @needle: The substring to search for
 *
 * Return: Return 0 on sucessiful execution
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}

