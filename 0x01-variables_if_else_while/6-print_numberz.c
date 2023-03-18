#include <stdio.h>

/**
 * main - This is the main function containing the whole program
 *
 * Return: Returns 0 to the int main function
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
