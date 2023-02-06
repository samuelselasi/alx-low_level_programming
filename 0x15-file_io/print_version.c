#include "main.h"

/**
 * print_version - print ELF version
 * @e_ident: ELF file
 * Return:none
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;

	default:

		printf("\n");
		break;
	}
}
