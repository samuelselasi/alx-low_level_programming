#include "variadic_functions.h"

/**
 * printc - print char
 * @vprint: the char
 */
void printc(va_list vprint)
{
	printf("%c", va_arg(vprint, int));
}
