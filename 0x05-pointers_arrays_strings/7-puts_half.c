#include "main.h"

/**
 * puts_half - print 2nd half of string
 * @str: the string
 * Return: none
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i - 1) / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar(10);
}
