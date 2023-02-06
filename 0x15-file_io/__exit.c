#include "main.h"

/**
 * __exit - print error messages and exit with value
 * @error: file descriptor or exit value
 * @s: name of file
 * @fd: file descriptor
 *
 * Return: Always 0
 */

int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);

	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);

	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);

	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);

	default:
		return (0);
	}
}
