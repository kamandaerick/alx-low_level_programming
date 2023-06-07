#include "main.h"
/**
 * _pow_recursion - This function returns the value of the first number 
 * raised to the second one y
 * @x: The ase value
 * @y: The power
 * Return: Returns the result of the operation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y-1));

}
