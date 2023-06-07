#include "main.h"
/**
 * _strlen_recursion - This function takes in a character pointer and returns the length of the string
 * @s: The function input whose length is to be measured
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int s_length = 0;

	if (*s)
	{
		s_length++;
		s_length += _strlen_recursion(s  + 1);
	}
	return (s_length);
}
