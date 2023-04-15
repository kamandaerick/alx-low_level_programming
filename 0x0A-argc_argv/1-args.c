#include <stdio.h>
#include "main.h"
/**
 * main - This function prints the number of arguments passed into the program
 * @argc: This is the number of arguments
 * * @argv: An array of the arguments passed
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf(" % d\n", argc - 1);
	return (0);
}
