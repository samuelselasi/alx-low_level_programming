#include "main.h"
#include "_strlen.c"

/**
 * rev_string - reverse string
 * @s: the string
 * Return: none
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = _strlen(s);
	j = 0;
	while (j < (i / 2))
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
		j++;
	}
}
