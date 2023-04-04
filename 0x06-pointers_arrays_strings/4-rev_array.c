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

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
	return (0);
}
