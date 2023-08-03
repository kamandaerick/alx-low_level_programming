#include "main.h"
/**
 * set_bit - sets the bit of a given index
 * @n: the pointer to the binary number to set bit
 * @index: the index to set
 * Return: returns 1 if it works and -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
