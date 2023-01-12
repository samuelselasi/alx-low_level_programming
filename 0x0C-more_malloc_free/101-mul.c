#include "main.h"
#include <stdio.h>
#include "stdlib.h"
#include "len.c"
#include "alloc_array.c"
#include "check_num.c"
#include "product.c"
#include "sum.c"
#include "_atoi.c"

/**
 * main - Multiplies two positive numbers.
 * @argv: argument vector
 * @argc: argument counter
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, i, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
	{
		argv[1] = check_num(argv[1]);
	}
	if (*(argv[2]) == '0')
	{
		argv[2] = check_num(argv[2]);
	}
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = _len(argv[1]) + _len(argv[2]);
	final_prod = alloc_array(size + 1);
	next_prod = alloc_array(size + 1);
	for (i = _len(argv[2]) - 1; i >= 0; i--)
	{
		digit = _atoi(*(argv[2] + i));
		product(next_prod, argv[1], digit, zeroes++);
		sum(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
