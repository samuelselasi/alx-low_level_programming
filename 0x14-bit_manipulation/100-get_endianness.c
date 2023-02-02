#include "main.h"

/**
 * get_endianness - check for endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int i = 1;
	char *check;

	check = (char *)&i;
	return ((int)check[0]);
}
