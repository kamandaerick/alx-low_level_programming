#include "main.h"
/**
 * clear_bit - sets the bit of a given index to 0
 * @n: the binary number whose specified bit is to be set
 * @index: the index to clear
 * Return: return 1 if it works and -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
