#include "main.h"

/**
 * print_most_numbers - The function prints numbers 0-9  except 2 & 4
 *
 * return: Does not return any value to th function (void)
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}

