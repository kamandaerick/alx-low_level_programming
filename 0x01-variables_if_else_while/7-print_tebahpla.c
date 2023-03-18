#include <stdio.h>

/**
 * main - This is theh main function that contains the whole project
 *
 * Return: The return statement returns an integer 0 to the int main function
 *
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
