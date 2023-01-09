#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: string to be appended
 * @src: string to append
 * @n: no. of bytes from srs to use
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
