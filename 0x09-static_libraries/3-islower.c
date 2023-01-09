#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: a function that checks if parameter c is lowercase
 *
 * Return: 1 if c is lower, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
