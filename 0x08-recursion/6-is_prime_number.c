#include "main.h"
/**
 * is_prime_number - This function says if a number is prime or not
 * @n: The number to be checked
 * Return: Returns 1 if prime and 0 if not
 */
int prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - This function checks if a number is prime
 * @n: The number to be checked
 * @i: The iterator
 * Return: returns 1 if the numer is prime and 0 if not
 */
int prime(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
