#include <stdio.h>
#include <stdlib.h>

void simple_scanf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            if (*p == 'd') {
                int *i = va_arg(args, int*);
                scanf("%d", i);
            } else if (*p == 's') {
                char *s = va_arg(args, char*);
                scanf("%s", s);
            }
        }
    }

    va_end(args);
}
