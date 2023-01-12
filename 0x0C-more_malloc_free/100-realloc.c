#include "main.h"

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to old memory
 * @old_size: no. of bytes for ptr
 * @new_size: no. of bytes for memory block
 *
 * Return: None
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			return (p);
		}
	}
	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		*((char *)p + i) = *((char *)ptr + i);
	}
	free(ptr);

	return (p);
}
