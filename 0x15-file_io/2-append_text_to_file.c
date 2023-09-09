#include "main.h"

/**
 * append_text_to_file - function that appends text to the
 * end of a file.
 *
 * @filename: name of the file.
 * @text_content: null terminated string to add to the
 * end of he file.
 *
 * Return: function return 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_bytes;

	if (!filename || !text_content)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	for (num_bytes = 0; *filename != '\0'; filename++)
		num_bytes++;

	num_bytes = write(fd, text_content, num_bytes);

	if (num_bytes == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}


