#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @r: function that prints the last digit of a number
 *
 * Return: return -1 if r is negative and 1 if r is positive
 */
int print_last_digit(int r)
{
	int l;

	l = r % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
