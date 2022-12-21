#include "main.h"

/**
 * cap_string - convert 1st words to caps
 * @s: the string
 *
 * Return: capped string
 */

char *cap_string(char *s)
{
	char *p = s;
	int cap;

	while (*p)
	{
		if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';'
				|| *p == '.' || *p == '!' || *p == '?' || *p == '"'
				|| *p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			cap = 1;
		}
		else if (cap && *p >= 'a' && *p <= 'z')
		{
			*p -= 'a' - 'A';
			cap = 0;
		}
		else
		{
			cap = 0;
		}
		p++;
	}
	return (s);
}
