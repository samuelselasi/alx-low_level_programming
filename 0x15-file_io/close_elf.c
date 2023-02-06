#include "main.h"

/**
 * close_elf - close ELF file
 * @elf: ELF file
 * Return: none
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);

		exit(98);
	}
}
