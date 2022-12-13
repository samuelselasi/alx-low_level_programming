#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * @n: input number n
 *
 * Return: none
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
