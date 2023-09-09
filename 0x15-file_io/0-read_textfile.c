#include "main.h"

/**
 * read_textfile -  a function to open and read a file.
 * 
 * @letters:  the number of bytes to read from the opened file.
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
		else
		{
			while ((num_bytes = read(fd, buffer, letters)) > 0)
				{
					if (write(STDOUT_FILENO, buffer, num_bytes) == -1)
					       return (0);
					return (num_bytes);
				}	
			
		}
		close(fd);
	}

	return (0);
}
