#include "main.h"
/**
 * _puts - This function prints a string followed by \n to stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');

}
