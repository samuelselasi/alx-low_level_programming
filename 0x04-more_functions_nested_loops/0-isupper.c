#include "main.h"
/**
 * _isupper - check if c is uppercase
 *
 * @c: checks if c is uppercase
 *
 * Return: 1 if c is upper, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
