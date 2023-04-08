#include "main.h"
/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: The input string to be printed
 * Return: returns 0 on successiful execution
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
