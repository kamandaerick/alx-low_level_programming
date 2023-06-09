#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to searrch
 * @index: index of the bit
 * Return: Returns the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= 64)
		return (-1);
	value = ((n >> index) & 1);
	return (value);
}
