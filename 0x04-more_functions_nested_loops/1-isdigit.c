#include "main.h"

/**
 * _isdigit - The function checks  if numbers arebetween 0 and 9
 * @c: The function parameter to be checked
 *
 * Return: Returns 1 if c is a digit and 0 if its not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

