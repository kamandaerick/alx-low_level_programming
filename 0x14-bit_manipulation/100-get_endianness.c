#include "main.h"
/**
 * get_endianness - check the endianness of a machine
 * Return: return 0 if ig endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *) &i;

	return (*ptr);
}
