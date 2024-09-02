int simple_atexit(void (*func)(void)) {
    if (atexit_count >= MAX_ATEXIT) {
        return -1;
    }
    atexit_funcs[atexit_count++] = func;
    return 0;
}
