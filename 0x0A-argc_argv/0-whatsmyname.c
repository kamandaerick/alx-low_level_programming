#include <stdio.h>
/**
 * main - The main function that prints program name
 * @argc: The number of commandline arguments
 * @argv: An array of command line arguments
 * Return: Returns 0 on successiful execution
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
