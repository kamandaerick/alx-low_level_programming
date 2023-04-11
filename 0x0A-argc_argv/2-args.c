#include <stdio.h>
#include "main.h"
/**
 * main - The main function all arguments the program receives
 * @argc: This is the number of arguments
 * @argv: This is an array of the arguments
 * Return: Returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
