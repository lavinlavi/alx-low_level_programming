#include "main.h"

/**
 * read_textfile -  a function to open and read a file.
 *
 * @letters:  the number of bytes to read from the opened file.
 * @filename: pointer to the file that is to be processed.
 *
 * Return: the function returns 0 if failures.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes;
	int fd;
	char *buffer;

	buffer = malloc(letters * sizeof(char));

	if (filename)
	{

		fd = open(filename, O_RDWR);

		if (fd == -1)
		{
			return (0);
		}

		while ((num_bytes = read(fd, buffer, letters)) > 0)
		{
			if (num_bytes != write(STDOUT_FILENO, buffer,  num_bytes))
				return (0);
			close(fd);
			free(buffer);
			return (num_bytes);
		}
	}

	return (0);
}
