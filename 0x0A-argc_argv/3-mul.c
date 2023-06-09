#include <stdio.h>
#include <stdlib.h>
/**
 * main - The function multiplies two numbers
 * @argc: The number of aruments apssed to the program
 * @argv: An array of the command ine arguments passed
 * Return: return 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
