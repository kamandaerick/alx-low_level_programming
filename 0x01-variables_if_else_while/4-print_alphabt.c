#include <stdio.h>
/**
 * main - This is the main function carrying the whole project
 *
 * Return: This returns 0 as an integer to the int main function
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
