#include "main.h"
/**
 * clear_bit - Sets the value of a given bit to 0
 * @n: Points to the number to change
 * @index: The index of the bit
 * Return: Return 1 on success and 0 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
