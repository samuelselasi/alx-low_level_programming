#include "main.h"
#include "_str_match.c"

/**
 * wildcmp - compare string with wildcard matches
 * @s1: the string
 * @s2: the wildcard
 * Return: 1 if matched, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (_str_match(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}
