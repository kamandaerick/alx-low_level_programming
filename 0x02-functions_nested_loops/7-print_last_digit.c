#include "main.h"
/**
 * print_last_digit - This function prints the last digit of a number
 *
 * @x: The number for which the last digit is printed
 *
 * Return: returns 0 to the print_last_digit function
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
