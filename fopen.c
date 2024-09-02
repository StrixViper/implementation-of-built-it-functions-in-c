#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

FILE *simple_fopen(const char *filename, const char *mode) {
    int fd;
    int flags = 0;
    int perm = 0644;  // Default file permissions

    if (*mode == 'r') {
        flags = O_RDONLY;
    } else if (*mode == 'w') {
        flags = O_WRONLY | O_CREAT | O_TRUNC;
    } else if (*mode == 'a') {
        flags = O_WRONLY | O_CREAT | O_APPEND;
    } else {
        return NULL;  // Unsupported mode
    }

    fd = open(filename, flags, perm);
    if (fd < 0) {
        return NULL;  // Failed to open file
    }

    FILE *file = malloc(sizeof(FILE));
    if (file == NULL) {
        close(fd);
        return NULL;  // Failed to allocate memory
    }

    file->_fileno = fd;  // Note: This is a simplified representation
    return file;
}
