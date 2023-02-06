#include "main.h"

#include "_strncmp.c"
#include "_close.c"
#include "_read.c"
#include "elf_magic.c"
#include "elf_class.c"
#include "elf_data.c"
#include "elf_version.c"
#include "elf_osabi.c"
#include "elf_abivers.c"
#include "elf_type.c"
#include "elf_entry.c"

/**
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: Always 0
 */

int main(int argc, const char *argv[])
{
	unsigned char buffer[18];
	unsigned int bit_mode;
	int big_endian;
	int fd;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	_read(fd, (char *) buffer, 18);
	if (buffer[0] != 0x7f || buffer[1] != 'E' || buffer[2] != 'L'
			|| buffer[3] != 'F')
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		_close(fd);
		exit(98);
	}
	elf_magic(buffer);
	bit_mode = elf_class(buffer);
	big_endian = elf_data(buffer);
	elf_version(buffer);
	elf_osabi(buffer);
	elf_abivers(buffer);
	elf_type(buffer, big_endian);
	lseek(fd, 24, SEEK_SET);
	_read(fd, (char *) buffer, bit_mode / 8);
	elf_entry(buffer, bit_mode, big_endian);
	_close(fd);
	return (0);
}
