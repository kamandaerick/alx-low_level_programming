#include "main.h"
/**
 * _puts_recursion - function behaves like the standard c-function puts
 * @s: The input string
 * Return: returns 0 upon successiful execution
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
