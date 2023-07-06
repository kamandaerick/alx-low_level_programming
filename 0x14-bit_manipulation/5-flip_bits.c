#include "main.h"
/**
 * flip_bits - Count the number of its to change
 * @n: The first number
 * @m: The second number
 * Return: The numer of its to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int tmp;

	for (tmp = n ^ m; tmp; tmp >>= 1)
		counter += tmp & 1;
	return (counter);
}
