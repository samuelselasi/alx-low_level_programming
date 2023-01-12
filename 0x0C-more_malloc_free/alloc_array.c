#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_array - array of X chars
 * @size: no. of bytes of array
 * Return: char
 */

char *alloc_array(int size)
{
	char *p;
	int i;

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		exit(98);
	}

	for (i = 0; i < (size - 1); i++)
	{
		p[i] = 'x';
	}

	p[i] = '\0';
	return (p);
}
