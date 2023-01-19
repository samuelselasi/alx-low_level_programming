#include "variadic_functions.h"

/**
 * printi - print int
 * @vprint: the integer
 */
void printi(va_list vprint)
{
	printf("%d", va_arg(vprint, int));
}
