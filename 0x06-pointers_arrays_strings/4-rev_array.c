#include "main.h"
/**
 * reverse_array - This function reverses an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in that array
 * Return: Does not return anything (void)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n - 1; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
