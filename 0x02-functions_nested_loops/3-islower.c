#include "main.h"
/**
 * _islower - Entry point
 *
 * description - check if lowercase
 *
 * Return: 1 if lower, 0 if otherwise
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
