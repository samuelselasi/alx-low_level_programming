#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar(10);
}
