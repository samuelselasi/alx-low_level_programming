#include "main.h"

#include "main.h"

/**
  *  _strlen - print length of string
  *  @s: the string
  *  Return: 0
  */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

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
