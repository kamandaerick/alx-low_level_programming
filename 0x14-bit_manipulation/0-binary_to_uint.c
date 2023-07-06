#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - This function converts a binary numer to an unsigned int
 * @b: A string of binary numbers to be converted
 * Return: Returns the converted number on success or 0 in fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
	}
	return (result);
}
