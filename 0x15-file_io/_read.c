#include "main.h"

/**
 * _read - readELF file
 * @fd: file descriptor to read from
 * @buf: the buffer to write to
 * @count: bytes to read
 *
 * Return: None
 */

void _read(int fd, char *buf, size_t count)
{
	if (read(fd, buf, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(fd);
	exit(98);
}
