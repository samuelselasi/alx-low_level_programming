#include "main.h"
/**
 * print_alphabet - entry point
 *
 * description - prints thealphabets in lowercase
 *
 * Return: none
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
