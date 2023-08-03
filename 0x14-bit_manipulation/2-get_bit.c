#include "main.h"
/**
 * get_bit - find the value of a bit at a given index
 * @n: the binary number
 * @index: the index at which to evaluate the bit
 * Return: returns the value of a bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valueAtIndex;

	if (index >= 64)
		return (-1);
	valueAtIndex = (n >> index) & 1;
	return (valueAtIndex);
}
