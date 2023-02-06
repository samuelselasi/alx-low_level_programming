#include "main.h"

/**
 * _close - close file descriptor
 * @fd: file descriptor
 * Return: none
 */

void _close(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}
