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
	va_start(parameters, format);

	while (format[j])
	{
		switch(format[j])
		{
			case 'c':
				{
					char c = va_arg(parameters, int);
					printf("%c,", c);
					break;
				}
			case 'i':
				{
					printf("%d,", va_arg(parameters, int));
					break;
				}
			case 'f':
				{
					double f = va_arg(parameters, double);
					printf("%f,", f);
					break;
				}
			case 's':
				{
					char *s = va_arg(parameters, char *);
					if (s == NULL)
						printf("(nil),");
					else
						printf("%s,", s);
					break;
				}
			default:
				{
					j++;
					continue;
				}
		}
		j++;
	}
	printf("\n");
	va_end(parameters);
}
