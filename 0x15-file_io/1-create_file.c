#include "main.h"
#include "_strlen.c"

/**
 * create_file - create file with rw permissions and write into it exclusively
 * @filename: name of file
 * @text_content: content to write into file
 *
 * Return: 1, -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n_write = write(fd, text_content, _strlen(text_content));
	if (n_write == -1 || n_write != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
