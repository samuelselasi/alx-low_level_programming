#include "main.h"
#include "_sq_root.c"

/**
 * _sqrt_recursion - print natural sqrt of an integer
 * @n: the integer
 * Return: square root of n
 * -1 if not natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sq_root(n, 0));
}
