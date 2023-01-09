#include "main.h"

/**
  *  _strlen - print length of string
  *  @s: the string
  *  Return: 0
  */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
