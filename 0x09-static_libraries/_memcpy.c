#include "main.h"

/**
 * _memcpy - function to copy src to dest
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
