#include <stdarg.h>
#include <unistd.h>

void simple_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            if (*p == 'd') {
                int i = va_arg(args, int);
                char buffer[10];
                int len = snprintf(buffer, sizeof(buffer), "%d", i);
                write(1, buffer, len);
            } else if (*p == 's') {
                char *s = va_arg(args, char*);
                write(1, s, strlen(s));
            }
        } else {
            write(1, p, 1);
        }
    }

    va_end(args);
}
