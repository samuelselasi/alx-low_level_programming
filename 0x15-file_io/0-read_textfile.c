#include "main.h"

/**
 * read_textfile - read a size and print to std output
 * @filename: file to read from
 * @letters: size to read
 *
 * Return:size read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_printed;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_printed = write(STDOUT_FILENO, buffer, n_read);
	if (n_printed == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (n_read);
}
