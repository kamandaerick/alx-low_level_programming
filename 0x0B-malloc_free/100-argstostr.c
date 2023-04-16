#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments of the program
 * @ac: The number of arguments
 * @av: The arguments
 * Return: Returns 0 on success
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int s = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s++;
	}
	s = s + ac;
	str = malloc(sizeof(char) * s + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
	}
	return (str);
}
