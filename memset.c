#include <stdio.h>
#include <string.h>

void* memset(void *ptr, int value, size_t num) {
    unsigned char *p = ptr;
    while (num--) {
        *p++ = (unsigned char)value;
    }
    return ptr;
}

int main() {
    char buffer[10];
    memset(buffer, 'A', 9);
    buffer[9] = '\0';
    printf("Filled memory: %s\n", buffer);
    return 0;
}
