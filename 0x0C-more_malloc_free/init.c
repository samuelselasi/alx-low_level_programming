#include "main.h"

/**
 * init - initialize string
 * @str: the string
 * @l: length of string
 *
 * Return: none
 */

void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
	{
		str[i] = '0';
	}
	str[i] = '\0';
}
