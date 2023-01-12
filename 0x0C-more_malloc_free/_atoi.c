#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Convert digit to int.
 * @c: the car
 * Return: int
 */

int _atoi(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}
