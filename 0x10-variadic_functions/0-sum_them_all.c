#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - This function returns the sum of all parameters
 * @n: The number of parameters
 * Return: Returns the sum or 0 if  n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list parameters;

	va_start(parameters, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);
	return (sum);
	va_end(parameters);
}
