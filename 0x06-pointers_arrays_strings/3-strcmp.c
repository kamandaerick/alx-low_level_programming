#include <main.h>
/**
 * _strcmp - This function compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: Returns  0 to the _strcm function
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (0);
		}
	}
	return (0);
}
