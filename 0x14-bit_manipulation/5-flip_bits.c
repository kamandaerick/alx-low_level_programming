#include "main.h"
/**
 * flip_bits - finds the number of its to flip from one no to another
 * @n: the first number
 * @m: the second number
 * Return: returns the number of its to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count = 0;

	result = n ^ m;
	while (result)
	{
		count++;
		result &= (result - 1);
	}
	return (count);
}
