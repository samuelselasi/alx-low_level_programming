#include "main.h"

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 * Return: 0 if digits, 1 if not
 */

int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				return (1);
			}
		}
	}
	return (0);
}
