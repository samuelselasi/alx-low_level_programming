#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: unsigned integer
 * Return: None
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
