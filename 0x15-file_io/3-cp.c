#include "main.h"
#include "__exit.c"

/**
 * main - copy file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0, 97-100 if error
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, n_read, n_write;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		__exit(99, argv[2], 0);

	if (chmod(argv[2], 0664) == -1)
		__exit(100, argv[2], 0);

	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		__exit(98, argv[1], 0);

	while ((n_read = read(fd_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_write = write(fd_2, buffer, n_read);
		if (n_write == -1)
			__exit(99, argv[2], 0);
	}
	close(fd_2) == -1 ? (__exit(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (__exit(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
