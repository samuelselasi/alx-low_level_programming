#include "main.h"
/**
 * print_number - print integer with putchar
 *
 * @n: function print integer n
 *
 * Return: none
 */
void print_number(int n)
{
	int i;
	int j;
	int k;
	unsigned int l;
	unsigned int m;

	j = 1;
	k = 0;
	l = n;
	m = n;
	if (n == 0)
	{
		_putchar(48);
	}
	if (n < 0)
	{
		_putchar(45);
		n = n + 1;
		n = -n;
		m = n;
		l = n;
		l = l + 1;
		m = m + 1;
	}
	while (l != 0)
	{
		l = (l / 10);
		k++;
	}
	for (i = 1; i < k; i++)
	{
		j = (j * 10);
	}
	for (i = 0; i < k; i++)
	{
		_putchar((m / j) + 48);
		m = (m % j);
		j = (j / 10);
	}
}
