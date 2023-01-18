#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1, num2;
		int (*f)(int, int);

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		f = get_op_func(argv[2]);
		if (f == NULL || (argv[2][1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
		if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", f(num1, num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
