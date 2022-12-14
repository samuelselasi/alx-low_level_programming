#include "main.h"
/**
 * largest_number - Entry point
 *
 * @a: first number
 *
 * @b: second number
 *
 * @c: third number
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
	{
		l = a;
	}
	else if (b >= a && b >= c)
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}
