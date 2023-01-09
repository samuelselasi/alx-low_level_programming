#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * num_check - check string for number
 * @s: string to check
 * Return: bool
 */

int num_check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
