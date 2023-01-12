#include "main.h"

/**
 * check_num - check zeros
 * @str: the string
 * Return: non zero number
 */

char *check_num(char *str)
{
	while (*str == '0')
	{
		str++;
	}

	return (str);
}
