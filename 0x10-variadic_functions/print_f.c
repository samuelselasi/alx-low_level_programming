#include "variadic_functions.h"

/**
 * print_f - print float
 * @vprint: the float
 */
void print_f(va_list vprint)
{
	printf("%f", va_arg(vprint, double));
}
