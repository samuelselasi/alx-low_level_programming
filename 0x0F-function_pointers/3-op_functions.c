#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulos
 */

int op_mod(int a, int b)
{
	return (a % b);
}
