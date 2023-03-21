#include "main.h"
/**
 * _abs - This function computes the absolute value of an integer
 *
 * @x: The function parameter whose absolute to be computed
 *
 * Return: Returns 0 to the _abs function
 */
int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x >= 0)
		x = x;
	return (x);
}
