#include <stdio.h>

/**
 * _atoi - convert sting to integer
 * @s: the string
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int r = 0;
	char c = 0;

	while (*s)
	{
		if (*s == '-')
		{
			x *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			c = 1;
			r = r * 10 + *s - '0';
		}
		else if (c)
			break;
		s++;
	}
	if (x < 0)
	{
		r = (-r);
	}
	return (r);
}
