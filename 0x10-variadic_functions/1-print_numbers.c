#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator:string to print
 * @n: number of integers
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vprint;

	va_start(vprint, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(vprint, int));
	}

	va_end(vprint);
	putchar(10);
}
