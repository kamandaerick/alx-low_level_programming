#include "main.h"
/**
 * _strpbrk - This function searches a string for any set of bytes
 * @s: The string in which to search
 * @accept: The string to search in s
 *
 * Return: returns a pointer to the byte that matches and NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
