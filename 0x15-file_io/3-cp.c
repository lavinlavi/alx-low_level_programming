#include "main.h"
void read_to_buf(char *buf, int fd_1, int fd_2, char *arg_2, char *arg_1);

/**
 * main - main function to copy from one file to another
 *
 * @argc: the number of arguments passed to main
 * @argv: a pointer to the arguments.
 *
 * Return: return 0 on success
 */


int main(int argc, char **argv)
{
	int fd_1, fd_2, i, j;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);

	}
	buf = malloc(sizeof(char) * 1024);
	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fd_1 = open(argv[1], O_RDONLY);
	read_to_buf(buf, fd_1, fd_2, argv[2], argv[1]);
	i = close(fd_1);
	j = close(fd_2);

	if(!buf)
	{
		return (-1);
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}

/**
 * read_to_buf - function toread and write from buffer
 * @buf: buffer pointer
 * @fd_1: file descriptor
 * @fd_2: - file descriptor
 * @arg_1: argument 1
 * @arg_2: - argument 2
 */

void read_to_buf(char *buf, int fd_1, int fd_2, char *arg_2, char *arg_1)
{
	ssize_t num_bytes;

	num_bytes = read(fd_1, buf, 1024);

	do {
		if (fd_1 == -1 || num_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", arg_1);
			free(buf);
			exit(98);
		}

		num_bytes = write(fd_2, buf, num_bytes);

		if (num_bytes == -1 || fd_2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg_2);
			free(buf);
			exit(99);
		}

		num_bytes = read(fd_1, buf, 1024);
		fd_2 = open(arg_2, O_WRONLY | O_APPEND);

	} while (num_bytes > 0);

	free(buf);
}

