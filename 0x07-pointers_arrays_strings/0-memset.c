#include "main.h"

/**
 * _memset - function to set memory to array
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
