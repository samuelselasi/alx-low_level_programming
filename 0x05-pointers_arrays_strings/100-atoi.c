#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _atoi - convert str to int
 * @s: the string
 * Return: integer
 */

int _atoi(char *s)
{
	int r;
	int n;
	int i;

	n = 1;
	i = 0;
	if (s[0] == '\0' || !isdigit(s[0]))
	{
		return (0);
	}
	while (isspace(s[i]))
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			n = -1;
		}
		i++;
	}
	while (isdigit(s[i]))
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
	return (n * r);
}
