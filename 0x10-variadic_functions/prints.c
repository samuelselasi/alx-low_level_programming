#include "variadic_functions.h"

/**
 * prints - print string
 * @vprint: the string
 */
void prints(va_list vprint)
{
	char *s;

	s = va_arg(vprint, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
