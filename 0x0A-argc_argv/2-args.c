#include <stdio.h>
/**
 * main - The function prints all arguments passed to it
 * @argc: The number of aruments passed to the program
 * @argv: A pointer to the array of arguments passed
 * Return: Return 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
