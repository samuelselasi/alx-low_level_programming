#include "variadic_functions.h"

/**
 * sum_them_all - sum variadic args
 * @n: int to sum
 * Return: sum or 0 if none
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list vsum;

	if (n == 0)
	{
		return (0);
	}

	va_start(vsum, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(vsum, int);
	}

	va_end(vsum);
	return (sum);
}
