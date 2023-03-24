#include "main.h"

/**
 * _isupper - The function checks for uppercase letters
 * @c: The is the  character  to check
 *
 * Return: Returns 1 if the letter is uppercase and 0 if lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

