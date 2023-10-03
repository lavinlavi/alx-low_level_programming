#include "main.h"

/**
 * append_text_to_file - Appends text at file end.
 * @filename: Pointer to the filename.
 * @text_content: String to add to file end.
 *
 * Description: Appends "text_content" to the end
 *              of the file named "filename". If 
 *              "text_content" is NULL, nothing is
 *              added.
 *
 * Return: 1 on success, -1 on failure. Failure 
 *         cases include filename being NULL, 
 *         or if the file does not exist and the
 *         user lacks write permissions.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

