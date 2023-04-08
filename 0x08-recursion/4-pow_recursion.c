#include "main.h"
/**
 * _pow_recursion - this function calculates the power of a number
 * @x: The base number
 * @y: the power
 * Return: returns the solution
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
