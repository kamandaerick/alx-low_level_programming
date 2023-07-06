#include "main.h"
/**
 * set_bit - function sets a bit at a given index
 * @n: Pointer to the number at index
 * @index: index of the bit to change
 * Return: Returns 1 on success and 0 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
