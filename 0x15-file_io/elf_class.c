#include "main.h"

/**
 * elf_class - print ELF class
 * @buffer: the ELF header
 *
 * Return: 32 or 64
 */

size_t elf_class(const unsigned char *buffer)
{
	printf("  %-34s ", "Class:");
	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}
