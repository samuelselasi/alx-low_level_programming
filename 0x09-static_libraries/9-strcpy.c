#include "main.h"
#include "2-strlen.c"

/**
 * char *_strcpy - copy str to src
 * @dest: string destination
 * @src: src directory
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
