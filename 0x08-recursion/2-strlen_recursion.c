#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string
 * @s: The string whose length is to beturned
 * Return: returns 0 on successiful execution
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
