#include <stdio.h>
/**
 * main - This is the main function that contain the whole program
 *
 * Return: Returnsint int 0 since the main function is declared as int
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return(0);
}
