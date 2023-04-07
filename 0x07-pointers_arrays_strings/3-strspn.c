#include "main.h"
/**
 * _strspn - This function gets the length of a prefix substring
 * @s: The string to be prefixed
 * @accept: The string to be used as a prefix
 * Return: Returns the number of bytes in s which consts of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
