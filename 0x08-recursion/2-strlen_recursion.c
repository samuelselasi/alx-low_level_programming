#include "main.h"

/**
 * _strlen_recursion - strlen with recurssion method
 * @s: the string
 * Return: integer length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
