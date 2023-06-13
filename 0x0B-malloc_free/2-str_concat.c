#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - This fucntion concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Returns NULL if string is empty and new string s successiful
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *solution;
	int j = 0;
	int s1_len = 0;
	int s2_len = 0;
	int final_length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;
	final_length = s1_len + s2_len + 1;
	solution = malloc(sizeof(char) * (final_length));
	if (solution == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		solution[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		solution[s1_len + j] = s2[j];
	solution[final_length] = '\0';
	return (solution);
}
