#include "main.h"

/**
 * elf_entry - print entry point address
 * @buffer: string containing the entry point address
 * @bit_mode: bit mode (32 or 64)
 * @big_endian: endianness (big endian if non-zero)
 *
 * Return: none
 */

void elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
{
	int address_size = bit_mode / 8;

	printf("  %-34s 0x", "Entry point address:");
	if (big_endian)
	{
		while (address_size && !*(buffer))
			--address_size, ++buffer;
		printf("%x", *buffer & 0xff);
		while (--address_size > 0)
			printf("%02x", *(++buffer) & 0xff);
	}
	else
	{
		buffer += address_size;
		while (address_size && !*(--buffer))
			--address_size;

		printf("%x", *buffer & 0xff);
		while (--address_size > 0)
			printf("%02x", *(--buffer) & 0xff);
	}
	printf("\n");
}
