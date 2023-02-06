#include "main.h"

/**
 * elf_version - print ELF version
 * @buffer: the ELF header
 * Return: none
 */

void elf_version(const unsigned char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);
	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}
