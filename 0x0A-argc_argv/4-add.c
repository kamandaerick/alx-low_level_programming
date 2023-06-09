#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - This function add only positive numbers
 * @argc: The number of commandline arguments passed to the program
 * @argv: A pointer to the array of comandline arguments passed
 * Return: Return 0 on success and 1 on error
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (isdigit(j))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
	}
	return (0);
}
