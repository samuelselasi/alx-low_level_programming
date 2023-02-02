#include "main.h"

/**
 * print_binary - print binary
 * @n: number to print as binary
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	i <<= ((sizeof(i) * 8) - 1);
	if (n == 1)
	{
		_putchar(49);
		return;
	}
	if (n == 0)
	{
		_putchar(48);
		return;
	}
	while (i > 0)
	{
		if ((i & n) == 0)
			i = i >> 1;

		else
			break;
	}
	while (i > 0)
	{
		if ((i & n) == 0)
			_putchar(48);

		else
			_putchar(49);

		i = i >> 1;
	}
}
