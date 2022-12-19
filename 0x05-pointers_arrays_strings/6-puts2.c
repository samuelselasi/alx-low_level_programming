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
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}
