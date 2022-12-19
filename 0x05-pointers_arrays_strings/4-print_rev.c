#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to print
 * Return: none
 */

void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	j = i + 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar(10);
}
