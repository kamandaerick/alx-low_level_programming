#include "main.h"

/**
 * positive_or_negative -Function checks if a number is positive or negative
 *
 * @i: This is the function prameter to be checked if positive or negative
 *
 * Return: Returns 0 to positive_or_negative function
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
