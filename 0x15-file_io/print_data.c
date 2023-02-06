#include "main.h"

/**
 * print_data - print data of ELF file
 * @e_ident: ELF file
 * Return: none
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;

	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;

	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;

	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
