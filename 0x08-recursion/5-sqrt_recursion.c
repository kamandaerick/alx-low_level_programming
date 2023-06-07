#include "main.h"
/**
 * _sqrt_recursion - This function returns the natural squareroot of a number
 * sqrt_recusrsion - Finds natural squareroot of a number
 * @n: The number whose squareroot is to be found
 * Return: Returns the squareroot
 */
int sqrt_recursion(int n, int m)
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}
/**
 * sqrt_recursion - This function finds the natural squareroot
 * of a number recursively
 * @n: The number whose squareroot is to be found
 * @m: iteration variable
 */
int sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == 0)
		return (m);
	return (sqrt_recursion(n, m + 1));
}
