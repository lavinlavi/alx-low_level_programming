#ifndef __MAIN__
#define __MAIN__

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
