#include "main.h"

/**
 * print_class - print class of ELF
 * @e_ident: RLF file
 * Return: none
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;

	case ELFCLASS32:
		printf("ELF32\n");
		break;

	case ELFCLASS64:
		printf("ELF64\n");
		break;

	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
