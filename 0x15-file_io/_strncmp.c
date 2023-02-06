#include "main.h"

/**
 * _strncmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 *
 * Return: 0 if n bytes are equal, -1 otherwise
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	for ( ; n && *s1 && *s2; --n, ++s1, ++s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	if (n)
	{
		if (*s1)
			return (1);
		if (*s2)
			return (-1);
	}
	return (0);
}
