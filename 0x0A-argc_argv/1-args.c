#include <stdio.h>
/**
 * main - The function prints the number of arguments supplied to it
 * @argc: The number of arguments passed
 * @argv: A pointer to an array of the arguments
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
