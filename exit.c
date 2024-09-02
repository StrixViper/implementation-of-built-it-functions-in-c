#include <stdio.h>
#include <stdlib.h>

#define MAX_ATEXIT 32

static void (*atexit_funcs[MAX_ATEXIT])(void);
static int atexit_count = 0;

void simple_exit(int status) {
    for (int i = atexit_count - 1; i >= 0; --i) {
        atexit_funcs[i]();
    }
    _exit(status);
}

int simple_atexit(void (*func)(void)) {
    if (atexit_count >= MAX_ATEXIT) {
        return -1;
    }
    atexit_funcs[atexit_count++] = func;
    return 0;
}
