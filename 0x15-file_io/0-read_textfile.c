#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read and print a text file.
 * @filename: Pointer to the filename.
 * @letters: Number of letters to read/print.
 *
 * Description: This function reads "letters" bytes from
 *              the file named "filename", and prints
 *              them to the POSIX standard output.
 *              Allocates a buffer, and manages the
 *              opening, reading, writing, and closing
 *              of the file, cleaning up and returning
 *              0 if any step fails.
 *
 * Return: If successful, returns the actual number
 *         of bytes read and printed. Returns 0 if
 *         the function fails, or filename is NULL,
 *         or write does not output the expected
 *         number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t o, r, w;
    char *buffer;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    o = open(filename, O_RDONLY);
    r = read(o, buffer, letters);
    w = write(STDOUT_FILENO, buffer, r);

    if (o == -1 || r == -1 || w == -1 || w != r)
    {
        free(buffer);
        return (0);
    }

    free(buffer);
    close(o);

    return (w);
}

