#include "main.h"

/**
 * elf_data - print ELF data
 * @buffer: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */

int elf_data(const unsigned char *buffer)
{
	printf("  %-34s ", "Data:");
	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}
