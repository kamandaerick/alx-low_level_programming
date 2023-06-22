#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - This function prints numbers followed by a new line
 * @separator: The string separating the numbers
 * @n: The number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list numbers;

	if (n == 0)
		return;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d ", va_arg(numbers, int));
		else
			printf("%d%s ", va_arg(numbers, int), separator);
	}
	printf("\n");
}
