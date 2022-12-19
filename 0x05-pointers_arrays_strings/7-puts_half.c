#include "main.h"
#include "_strlen.c"

/**
 * puts_half - print 2nd half of string
 * @str: the string
 * Return: none
 */

void puts_half(char *str)
{
	int i;
	int j = 0;

	if (_strlen(str) % 2 != 0)
	{
		j = j + 1;
	}
	for (i = (_strlen(str) + j) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
