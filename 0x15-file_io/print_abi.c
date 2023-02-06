#include "main.h"

/**
 * print_abi - print ABI version of ELF file
 * @e_ident: ELF file
 * Return: none
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}
