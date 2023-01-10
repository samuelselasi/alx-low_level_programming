#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: combination of the 2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		len1++, i++;
	}
	while (*(s2 + j))
	{
		len2++, j++;
	}
	len2++;
	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(concat + i) = *(s1 + i);
	}
	for (j = 0; j < len2; j++)
	{
		*(concat + i) = *(s2 + j);
		i++;
	}
	return (concat);
}
