#include "main.h"

/**
 * _calloc - allocate memory for array
 * @nmemb: no. of elements
 * @size: no. of bytes
 *
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)p + i) = 0;
	}

	return (p);
}
