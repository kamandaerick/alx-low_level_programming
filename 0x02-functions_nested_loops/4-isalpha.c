#include "main.h"
/**
 * _isalpha - This function checks for alphabetic character
 *
 * @c: This is the function paramter to be cehcked
 *
 * Return: Returns 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
