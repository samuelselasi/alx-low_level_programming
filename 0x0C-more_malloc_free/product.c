#include "main.h"
#include <stdio.h>

/**
 * product - Multiply
 * @prod: the product
 * @mult: the string
 * @digit: the integer
 * @zeroes: check zeros
 *
 * Return: none
 */

void product(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = _len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num = num + tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
	{
		*prod = (tens % 10) + '0';
	}
}
