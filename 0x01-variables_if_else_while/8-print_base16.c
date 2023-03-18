#include <stdio.h>

/**
 * main - This is the main function containing the whole progra
 *
 * Return: Returns an integer 0 to the int main function
 *
 */
int main(void)
{
	int i;
	char h;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (h = 'a'; h <= 'f'; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
