#include "main.h"
/**
 * reverse_array - This functionn reverses an array
 * @a: The string to be reversed
 * @n: The number of elements in the string
 * Return: Returns 0
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

