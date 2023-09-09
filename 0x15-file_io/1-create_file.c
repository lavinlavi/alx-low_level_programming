#include "main.h"

/**
 * create_file - a function to create a file.
 * @filename: pointer to the name of the file
 * @text_content: text to be written to the file.
 *
 * Return: returns 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd;
	int num_bytes;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd != -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	num_bytes = write(fd, text_content, i);

	if (num_bytes == -1)
		return (-1);
	close(fd);

	return (1);


}

