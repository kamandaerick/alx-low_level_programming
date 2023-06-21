#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - This function pirnts a name
 * @name: The name it prints
 * @f: A function pointer that takes a char pointer and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
