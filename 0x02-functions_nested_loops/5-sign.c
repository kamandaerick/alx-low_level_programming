#include "main.h"
/**
 * print_sign - This function prints the sign of a number
 *
 * @n: This if the function argument that is checked
 *
 * Return: Returns 1 for n>0, 0 for n=0, and -1 for n<1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
