#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number whose binary is to be printed
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int number = 0;
	unsigned long int currentValue;

	for (i = 63; i >= 0; i--)
	{
		currentValue = n >> i;
		if (currentValue & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
			_putchar('0');
	}
	if (!number)
		_putchar('0');
}
