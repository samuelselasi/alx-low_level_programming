#include "main.h"

/**
 * elf_abivers - print ELF ABI version
 * @buffer: the ELF header
 * Return: none
 */

void elf_abivers(const unsigned char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}
