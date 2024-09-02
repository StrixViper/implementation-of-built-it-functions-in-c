#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int simple_fprintf(int fd, const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            if (*p == 'd') {
                int i = va_arg(args, int);
                char buffer[10];
                int len = snprintf(buffer, sizeof(buffer), "%d", i);
                write(fd, buffer, len);
            } else if (*p == 's') {
                char *s = va_arg(args, char*);
                write(fd, s, strlen(s));
            }
        } else {
            write(fd, p, 1);
        }
    }

    va_end(args);
    return 0;
}
