#include "main.h"
/**
 * _len - find length of string
 * @str: the string
 * Return: length
 */

int _len(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
