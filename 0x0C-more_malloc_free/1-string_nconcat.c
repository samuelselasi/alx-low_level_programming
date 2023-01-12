#include "main.h"
#include "_strlen.c"

/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: no. of bytes
 *
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int num, i, j, len;

	num = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	len = _strlen(s1) + num + 1;
	p = malloc(sizeof(*p) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < num; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}
