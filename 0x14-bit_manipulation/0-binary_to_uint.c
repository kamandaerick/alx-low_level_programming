#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - convert inary to unsigned int
 * @b: a string of binary number
 * Return: returns an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, lenb = 0;
	unsigned int currentValue = 1;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		lenb++;
	for (i = (lenb - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			result = result + currentValue;
		else if (b[i] != '0')
			return (0);
		currentValue *= 2;
	}
	return (result);
}
