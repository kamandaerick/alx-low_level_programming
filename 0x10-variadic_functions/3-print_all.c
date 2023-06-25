#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - This function prints all arguments
 * @format: list of types of aruments passed
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	va_list parameters;
	char *s;
	char *separator = "";

	va_start(parameters, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(parameters, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(parameters, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(parameters, double));
					break;
				case 's':
					s = va_arg(parameters, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					j++;
					continue;
			}
			separator = ",";
			j++;
		}
	}
	printf("\n");
	va_end(parameters);
}
