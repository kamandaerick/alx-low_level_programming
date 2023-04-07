#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 * @s: Address of the memory to be filled
 * @b: The value to fill the memory with
 * @n: The number of bytes to be changed
 *
 * Return: Returns the changed array with new values "b"
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
