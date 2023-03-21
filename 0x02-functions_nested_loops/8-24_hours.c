#include "main.h"
/**
 * jack_bauer -Function every minute of tarting from 0000hrs to 2359 hrs
 *
 * Return: Returns 0 to the jack_bauer function
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10), '0');
			_putchar((i % 10), '0');
			_putchar(':');
			_putchar((j / 10), '0');
			_putchar((j % 10), '0');
			_putchar('\n');
		}
	}
}
