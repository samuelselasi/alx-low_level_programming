#include "main.h"
/**
 * main - Entry point
 *
 * Description - print _putchar
 *
 * Return: always 0
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
