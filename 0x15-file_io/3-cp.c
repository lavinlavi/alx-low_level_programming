#include "main.h"

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
	char buf[BUF_SIZ];
	ssize_t num_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);

	}
	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IWUSR 
		       	| S_IRUSR | S_IRGRP | S_IWGRP |S_IROTH);
	fd_2 = open(argv[1], O_RDONLY);

	if (fd_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(100);
	}

	num_bytes = read(fd_2, buf, BUF_SIZ);
	if (write(fd_1, buf, num_bytes) != num_bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	i = close(fd_1);
	j = close(fd_2);
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
