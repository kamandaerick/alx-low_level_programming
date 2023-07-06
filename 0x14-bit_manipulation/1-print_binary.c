#include "main.h"
/**
 * print_binary - Prints binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	int i;
	int counter = 0;
	unsigned long int currentValue;

	for (i = 63; i >= 0; i--)
	{
		currentValue = n >> i;
		if (currentValue & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
