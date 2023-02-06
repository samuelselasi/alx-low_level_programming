#include "main.h"

/**
 * elf_magic - print magic number
 * @buffer: ELF file
 * Return: none
 */

void elf_magic(const unsigned char *buffer)
{
	unsigned int i;

	if (_strncmp((const char *) buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}
