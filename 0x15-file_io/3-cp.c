#include "main.h"

/**
 * main - copy file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0, 97-100 if error
 */

int main(int argc, char *argv[])
{
	int src, dest, on_close, n_write, n_read;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	src = open(argv[1], O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	while (1)
	{
		n_read = read(src, buffer, 1024);
		if (n_read == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

		if (n_read > 0)
		{
			n_write = write(dest, buffer, n_read);
			if (n_write == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	on_close = close(src);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);

	on_close = close(dest);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);

	return (0);
}
