#include "main.h"
/**
 * _abs - entry point
 *
 * description - print absolute value of an integer
 *
 * Return: always 0
 */
int _abs(int r)
{
	if (r > 0)
	{
		return(r);
	}
	else
	{
		return(r * -1);
	}
}
