#include "main.h"
/**
 * swap_int - The function swaps the values of two integers
 * @a: First integer to swap
 * @b: Second integer to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
