#include "main.h"
#include "_strlen.c"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all args
 * @ac: argc
 * @av: arguments
 *
 * Return: array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len += (ac + 1);
	s = malloc(len * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	return (s);
}
