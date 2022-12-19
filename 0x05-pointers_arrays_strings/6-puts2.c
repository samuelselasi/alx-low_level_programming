#include "main.h"
#include "_strlen.c"

/**
 * puts2 - prints very other character
 * @str: string
 * Return: none
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar(10);
}
