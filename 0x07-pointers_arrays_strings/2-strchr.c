#include "main.h"
/**
 * _strchr - This function locates a character in a string
 * @s: The string on which to locate the character
 * @c: The character to locate
 *
 * Return: Returns the character if found or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
