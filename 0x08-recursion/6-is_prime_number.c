#include "main.h"
/**
 * is_prime_number - This function returns 1 for a prime number and 0
 * for non-prime numbers
 * @n: The number to be checked
 * Return: Returns 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
	{
		if ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0))
			return (1);
		else
			return (0);
	}
}
