#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * description - Print last digit of a number
 *
 * Return: always -1 if negative and 1 if positive
 */
int print_last_digit(int r)
{
	int l;

	l = (r % 10);
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (1);
	}
}
