#include "lists.h"

/**
 * _strlen - find string length
 * @str: the string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
