#include "main.h"

/**
 * factorial - print factorial of integer
 * @n: integer to print factorial of
 * Return: factorial of n
 * -1 if n is negative
 *  1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
