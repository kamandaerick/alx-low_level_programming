#include "main.h"
/**
 * get_endianness - Checks for endianness of a machine
 * Return: Returns 1 for small and 0 for big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}
