#include "main.h"
/**
 * puts2 - This function prints only one character out of two
 * starting with the first one
 * @str: input/ function parameter
 * Return: Does not return anything since the function is void
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

