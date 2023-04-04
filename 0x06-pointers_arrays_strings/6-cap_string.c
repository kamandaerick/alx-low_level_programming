#include "main.h"
/**
 * cap_string - The function capitalizes all words
 * @str: The string containing words to be capitalized
 * Return: Returns a string with capitalized words
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i -1] == ',' || str[i - 1] == ';' || str[i - 1] =='.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
