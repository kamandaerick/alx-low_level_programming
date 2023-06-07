#include "main.h"
/**
 * factorial - This function returns the factorial of a number
 * @n: The number whose factorial to be returned
 * Return: returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
