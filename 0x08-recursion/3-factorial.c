#include "main.h"
/**
 * factorial - This function returns the factorial of a number
 * @n: The number whose factorial is to be returned
 * Return: returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
