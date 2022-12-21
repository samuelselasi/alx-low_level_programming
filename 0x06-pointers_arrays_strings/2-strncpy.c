#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: string to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
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
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
