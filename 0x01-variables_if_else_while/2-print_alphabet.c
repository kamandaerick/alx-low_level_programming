#include <stdio.h>
/**
 * main - The main function that contains the whole program
 *
 * Return: Returns an integer since the main function is declared as an int
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
