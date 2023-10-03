#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates a 1024-byte buffer.
 * @file: Name of the file being written to.
 *
 * Description: Allocates a buffer of 1024 bytes
 *              and returns a pointer to this buffer.
 *              If allocation fails, it prints an
 *              error message to stderr, and exits
 *              with code 99.
 *
 * Return: Pointer to the allocated buffer.
 */
char *create_buffer(char *file)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO,
            "Error: Can't write to %s\n", file);
        exit(99);
    }
    return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Description: Closes the file descriptor passed
 *              as parameter. If closing fails, it
 *              prints an error message to stderr
 *              and exits with code 100.
 */
void close_file(int fd)
{
    int c;

    c = close(fd);
    if (c == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

/**
 * main - Copies content from one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect,
 *              exits with code 97. If the source file
 *              does not exist or can’t be read, exits
 *              with code 98. If the destination file
 *              can't be written to, exits with code 99.
 *              If it can’t close a file descriptor,
 *              exits with code 100.
 */
int main(int argc, char *argv[])
{
    int from, to, r, w;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buffer(argv[2]);
    from = open(argv[1], O_RDONLY);
    r = read(from, buffer, 1024);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    do {
        if (from == -1 || r == -1)
        {
            dprintf(STDERR_FILENO,
                "Error: Can't read from file %s\n", argv[1]);
            free(buffer);
            exit(98);
        }

        w = write(to, buffer, r);
        if (to == -1 || w == -1)
        {
            dprintf(STDERR_FILENO,
                "Error: Can't write to %s\n", argv[2]);
            free(buffer);
            exit(99);
        }

        r = read(from, buffer, 1024);
        to = open(argv[2], O_WRONLY | O_APPEND);

    } while (r > 0);

    free(buffer);
    close_file(from);
    close_file(to);

    return (0);
}

