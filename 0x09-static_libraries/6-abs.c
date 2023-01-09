#include "main.h"
/**
 * _abs - entry point
 *
 * @r: a function that computes the absolute value of integer r
 *
 * Return: return r if r is positive, return r * -1
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
