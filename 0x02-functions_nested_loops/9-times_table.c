#include "main.h"
/**
 * times_table - Entry point
 *
 * description - print times table
 *
 * return: none
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if (k <= 9)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
