#include <stdio.h>
/**
 * main - This is the main function that prints the name of the program
 * @argc: This is the argument count
 * @argv: This is an array of arguments
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *argv);
	return (0);
}
