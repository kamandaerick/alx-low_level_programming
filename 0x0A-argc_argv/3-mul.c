#include <stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers (arguments)
 * @argc: The number of arguments the function receives
 * @argv: An array of those arguments
 * Return: Returns 1 if arguments are not 2 and 0 on success
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
