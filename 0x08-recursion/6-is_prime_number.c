#include "main.h"
#include "_prime_number.c"

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (_prime_number(n, divisor));
}
