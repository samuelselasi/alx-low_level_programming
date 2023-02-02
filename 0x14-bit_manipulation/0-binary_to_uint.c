#include "main.h"

/**
 * binary_to_uint - convert binary to ui
 * @b: the binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == 49)
			result = (result << 1) | 1;

		else if (*b == 48)
			result <<= 1;

		else
			return (0);

		b++;
	}
	return (result);
}
