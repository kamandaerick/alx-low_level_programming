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

	va_start(parameters, format);

	while (format[j])
	{
		switch (format[j])
		{
			case 'c':
				{
					printf("%c,", va_arg(parameters, int));
					break;
				}
			case 'i':
					printf("%d,", va_arg(parameters, int));
					break;
			case 'f':
					printf("%f,", va_arg(parameters, double));
					break;
			case 's':
					s = va_arg(parameters, char *);

					if (s == NULL)
						printf("(nil),");
					else
						printf("%s,", s);
					break;
			default:
					j++;
					continue;
		}
		j++;
	}
	printf("\n");
	va_end(parameters);
}
