#include "main.h"
/**
 * string_toupper - This function changes a string to uppercase
 * @s: The string to be changed
 * Return: Returns the UPPERCASE string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
