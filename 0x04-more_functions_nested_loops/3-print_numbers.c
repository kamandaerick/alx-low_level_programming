#include "main.h"

/**
 * print_numbers - The function prints numbers  0-9
 * Return: The function does not return any value (void)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

