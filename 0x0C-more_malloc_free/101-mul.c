#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - This function multiplies two positive numbers
 * @argc: The number of commandline arguments
 * @argv: An array of the actual arguments eneterd
 * Return: Returns 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int result;

	if (argc != 3)
	{
		_putchar("Error\n");
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			_putchar("Error\n");
			exit(98);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			_putchar("Error\n");
			exit(98);
		}
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	result = num1 * num2;
	_putchar("%d\n", result);
	return (0);
}
